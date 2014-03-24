/*
 T his program is free s*oftware; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor,
 Boston, MA  02110-1301, USA.
 
 ---
 Copyright (C) 2014, mickey <mickey.mouse-1985@libero.it>
 */

#include "ReportGen.hpp"

// error handling method
void hpdf_error_handler(HPDF_STATUS error_no, HPDF_STATUS detail_no, void *user_data) {
  std::stringstream strs;
  strs << "PDF library error: code: 0x" << std::hex << error_no;
  strs << ", detail: " << std::dec << detail_no;
  throw std::runtime_error(strs.str());
}

class ReportGen {
public:
ReportGen::ReportGen():
  curDataPage_(data_.end()),
  hasFirstPage(false),
  isFinalized(false)
{ }

ReportGen::~ReportGen() {
  if (nullptr != globals.pdf) HPDF_Free(globals.pdf);
}

void ReportGen::setFrontPage(const PageExecutor &front) {
  front_ = new PageExecutor(front);
}

void ReportGen::setFirstPage(const DataPageExecutor &first) {
  hasFirstPage = true;
  assert(0 == dataPages_.size());
  addDataPage(first);
}

void ReportGen::addDataPage(const DataPageExecutor &page) {
  data_.emplace_back(new DataPageExecutor(page));
}

void ReportGen::setLastPage(const PageExecutor &last) {
  last_ = new PageExecutor(last);
}

void ReportGen::setReportHeaders(const std::list< std::string > &headers) {
  globals.headers = headers;
}

void ReportGen::addRecord(const std::list< std::string > &record) {
  if (nullptr == globals.pdf) initPdfDocument();
  bool ok = curDataPage_->addRecord(globals, record);
  if (!ok) {
    // not enough room in current page for the record
    curDataPage_->end(globals);
    moveItrToNextPage();
    ok = curDataPage_->addRecord(globals, record);
    assert(ok); // otherwise means that even on a empty data page there is not enought room for this record
    curDataPage_->init(globals);
  }
}

void ReportGen::finalizeDocument() {
  if (nullptr != lastPage_) {
    lastPage_->init(globals);
    lastPage_->end(globals);
  }
  if (nullptr != frontPage_) frontPage_->finalize(globals);
  curDataPage_ = dataPages_->begin();
  for (unsigned int index = 0; index < globals.pages.size(); ++index) {
    curDataPage_->finalize(globals, index);
    moveItrToNextPage();
  }
  lastPage_->finalize(glob);
  isFinalized = true;
}

void ReportGen::saveToFile(const std::string &fileName) const {
  HPDF_SaveToFile(globals.pdf, fileName.data());
}

void ReportGen::initPdfDocument() {
  assert(nullptr == globals.pdf);
  globals.pdf = HPDF_New(hpdf_error_handler, nullptr);
  if (nullptr != frontPage_) {
    frontPage_->init(globals);
    frontPage_->end(globals);
  }
  curDataPage_ = dataPages_.begin();
  curDataPage_->init(globals);
}

void ReportGen::moveItrToNextPage() {
  curDataPage_++;
  if (dataPages_.end() == curDataPage_) {
    curDataPage_ = dataPages_.begin();
    if (hasFirstPage) curDataPage_++; // skip custom first page when looping
  }
}
