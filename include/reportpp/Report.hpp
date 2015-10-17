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

#ifndef REPORTPP_REPORT_IMPL_H
#define REPORTPP_REPORT_IMPL_H

#include "reportpp/parser/reportpp-pskel.hxx"

namespace reportpp {

class Report: public reportType_pskel {
public:
    void pre();

    void frontPage(const ReportPage&);
    void firstPage(const ReportPage&);
    void dataPage(const ReportPage&);
    void lastPage(const ReportPage&);

    void pageFormat(const PageFormat&);
    void marginTop(float);
    void marginBottom(float);
    void marginLeft(float);
    void marginRight(float);

    void post_reportType();

private:
    ReportPage defaultPageFormat;
};

} // namesapace reportpp

#endif // REPORTPP_REPORT_IMPL_H
