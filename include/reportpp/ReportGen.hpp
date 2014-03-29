/*
 * This file is part of reportpp.
 *
 * reportpp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * reportpp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with reportpp.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * ---
 * Copyright (C) 2014, mickey <mickey.mouse-1985@libero.it>
 */

#ifndef REPORT_GEN_HPP
#define REPORT_GEN_HPP

#include <list>
#include <memory>

#include "ReportGlobals.hpp"
#include "executor/PageExecutor.hpp"
#include "executor/DataPageExecutor.hpp"

class ReportGen {
public:
  ReportGen();
  ~ReportGen();

  bool hasFrontPage() const { return nullptr != frontPage_; }
  PageExecutor &getFrontPage();

  bool hasFirstPage() const { return hasFirstPage_; }
  PageExecutor &getFirstPage();

  PageExecutor &addDataPage();

  bool hasLastPage() const { return nullptr != lastPage_; }
  PageExecutor &getLastPage();

  void setReportHeaders(const std::list< std::string > &headers) { globals.headers = headers; }

  void addRecord(const std::list< std::string > &record);

  void finalizeDocument();
  
  void saveToFile(const std::string &fileName) const;

private:
  std::unique_ptr< PageExecutor >                  frontPage_; ///< Front page executor
  std::list< std::unique_ptr< DataPageExecutor > > dataPages_; ///< list of data page executors
  std::unique_ptr< PageExecutor >                  lastPage_;  ///< Last page executor

  ReportGlobals globals;
  std::list< std::unique_ptr< DataPageExecutor > >::const_iterator curDataPage_;
  bool hasFirstPage_; ///< \c true if the first item of \c dataPages_ is a custom first page
  bool isFinalized;  ///< \c true when the document has been finalized (no more changes are possible)

  void initPdfDocument();
  void moveItrToNextPage();
};

#endif /* ifndef REPORT_GEN_HPP */