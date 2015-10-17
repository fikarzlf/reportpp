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

#include "reportpp/ReportPage.hpp"
#include "types/PageFormatParser.hpp"

#include <iostream>

namespace reportpp {

void ReportPage::block() {
    std::clog << "ReportPage::block() called" << std::endl;
}

void ReportPage::pageFormat(const PageFormat &pageFormat) {
    std::clog << "ReportPage::pageFormat() called with " << pageFormat << " arg" << std::endl;
    pageFormat_ = pageFormat;
}

void ReportPage::marginTop(float marginTop) {
    std::cout << "ReportPage::marginTop(): " << marginTop << std::endl;
}

void ReportPage::marginBottom(float marginBottom) {
    std::cout << "ReportPage::marginBottom(): " << marginBottom << std::endl;
}

void ReportPage::marginLeft(float marginLeft) {
    std::cout << "ReportPage::marginLeft(): " << marginLeft << std::endl;
}

void ReportPage::marginRight(float marginRight) {
    std::cout << "ReportPage::marginRight(): " << marginRight << std::endl;
}

void ReportPage::post_ReportPage() {
}

} // namespace reportpp
