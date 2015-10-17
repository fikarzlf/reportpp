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

#include "reportpp/parser/PageFormat.hpp"
#include "reportpp/parser/Report.hpp"
#include "reportpp/types/ReportPage.hpp"

#include <iostream>

namespace reportpp {
namespace parser {

void Report::pre() {
    std::clog << "Report::pre() called" << std::endl;
    defaultPageFormat = ::reportpp::ReportPage(::reportpp::PageFormat::a4, 0.0, 0.0, 0.0, 0.0);
}

void Report::frontPage(const ::reportpp::ReportPage &frontPage) {
    ::reportpp::ReportPage front(frontPage, defaultPageFormat);
    std::clog << "Report::frontPage(): " << frontPage << std::endl;
    std::clog << "Report::frontPage(): " << front << std::endl;
}

void Report::firstPage(const ::reportpp::ReportPage &firstPage) {
    ::reportpp::ReportPage first(firstPage, defaultPageFormat);
    std::clog << "Report::firstPage(): " << firstPage << std::endl;
    std::clog << "Report::firstPage(): " << first << std::endl;
}

void Report::dataPage(const ::reportpp::ReportPage &dataPage) {
    ::reportpp::ReportPage data(dataPage, defaultPageFormat);
    std::clog << "Report::dataPage(): " << dataPage << std::endl;
    std::clog << "Report::dataPage(): " << data << std::endl;
}

void Report::lastPage(const ::reportpp::ReportPage &lastPage) {
    ::reportpp::ReportPage last(lastPage, defaultPageFormat);
    std::clog << "Report::lastPage(): " << lastPage << std::endl;
    std::clog << "Report::lastPage(): " << last << std::endl;
}

void Report::pageFormat(const ::reportpp::PageFormat &format) {
    std::clog << "Report::pageFormat() called with " << format << " arg" << std::endl;
    defaultPageFormat.setFormat(format);
}

void Report::marginTop(float value) {
    std::clog << "Report::marginTop() called with " << value << " arg" << std::endl;
    defaultPageFormat.setMarginTop(value);
}

void Report::marginBottom(float value) {
    std::clog << "Report::marginBottom() called with " << value << " arg" << std::endl;
    defaultPageFormat.setMarginBottom(value);
}

void Report::marginLeft(float value) {
    std::clog << "Report::marginLeft() called with " << value << " arg" << std::endl;
    defaultPageFormat.setMarginLeft(value);
}

void Report::marginRight(float value) {
    std::clog << "Report::marginRight() called with " << value << " arg" << std::endl;
    defaultPageFormat.setMarginRight(value);
}

void Report::post_reportType() {
    std::clog << "Report::post_reportType() called" << std::endl;
}

}} // namespace reportpp::parser
