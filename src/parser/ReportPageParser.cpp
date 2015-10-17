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

#include "reportpp/ReportPageParser.hpp"
#include "types/PageFormatParser.hpp"

#include <iostream>

namespace reportpp {

void ReportPageParser::block() {
    std::clog << "ReportPageParser::block() called" << std::endl;
}

void ReportPageParser::pageFormat(const PageFormat &pageFormat) {
    std::clog << "ReportPageParser::pageFormat() called with " << pageFormat << " arg" << std::endl;
    result_.setFormat(pageFormat);
}

void ReportPageParser::marginTop(float marginTop) {
    std::cout << "ReportPageParser::marginTop(): " << marginTop << std::endl;
    result_.setMarginTop(marginTop);
}

void ReportPageParser::marginBottom(float marginBottom) {
    std::cout << "ReportPageParser::marginBottom(): " << marginBottom << std::endl;
    result_.setMarginBottom(marginBottom);
}

void ReportPageParser::marginLeft(float marginLeft) {
    std::cout << "ReportPageParser::marginLeft(): " << marginLeft << std::endl;
    result_.setMarginLeft(marginLeft);
}

void ReportPageParser::marginRight(float marginRight) {
    std::cout << "ReportPageParser::marginRight(): " << marginRight << std::endl;
    result_.setMarginRight(marginRight);
}

ReportPage ReportPageParser::post_ReportPage() {
    return result_;
}

} // namespace reportpp
