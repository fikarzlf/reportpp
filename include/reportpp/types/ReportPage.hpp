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

#ifndef REPORTPP_TYPES_REPORT_PAGE_H
#define REPORTPP_TYPES_REPORT_PAGE_H

#include "reportpp/types/PageFormat.hpp"

namespace reportpp {

class ReportPage {
public:
    ReportPage() {}
    ~ReportPage() {}
    
    void setFormat(const PageFormat &pageFormat) { pageFormat_ = pageFormat; }
    void setMarginTop(float marginTop) { marginTop_ = marginTop; }
    void setMarginBottom(float marginBottom) { marginBottom_ = marginBottom; }
    void setMarginLeft(float marginLeft) { marginLeft_ = marginLeft; }
    void setMarginRight(float marginRight) { marginRight_ = marginRight; }

private:
    PageFormat pageFormat_;
    float marginTop_;
    float marginBottom_;
    float marginLeft_;
    float marginRight_;
};

} // namespace reportpp

#endif /* ifndef REPORTPP_TYPES_REPORT_PAGE_H */
