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

#include "../include/reportpp/Report.hpp"
#include "types/PageFormatParser.hpp"

#include <iostream>

namespace reportpp {

void Report::pre() {
    std::clog << "Report::pre() called" << std::endl;
}

void Report::frontPage() {
    std::clog << "Report::frontPage() called" << std::endl;
}

void Report::firstPage() {
    std::clog << "Report::firstPage() called" << std::endl;
}

void Report::dataPage() {
    std::clog << "Report::dataPage() called" << std::endl;
}

void Report::lastPage() {
    std::clog << "Report::lastPage() called" << std::endl;
}

void Report::pageFormat(const PageFormat &format) {
    std::clog << "Report::pageFormat() called with " << format << " arg" << std::endl;
    pageFormat_ = format;
}

void Report::marginTop(float value) {
    std::clog << "Report::marginTop() called with " << value << " arg" << std::endl;
    margins.top = value;
}

void Report::marginBottom(float value) {
    std::clog << "Report::marginBottom() called with " << value << " arg" << std::endl;
    margins.bottom = value;
}

void Report::marginLeft(float value) {
    std::clog << "Report::marginLeft() called with " << value << " arg" << std::endl;
    margins.left = value;
}

void Report::marginRight(float value) {
    std::clog << "Report::marginRight() called with " << value << " arg" << std::endl;
    margins.right = value;
}

void Report::post_reportType() {
    std::clog << "Report::post_reportType() called" << std::endl;
}

} // namespace reportpp
