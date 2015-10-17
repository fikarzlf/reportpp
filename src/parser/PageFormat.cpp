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

#include <iostream>
#include <stdexcept>

namespace reportpp {
namespace parser {

::reportpp::PageFormat PageFormat::post_tPageFormat() {
    ::reportpp::PageFormat result;
    const std::string &value(post_string());

    if (value == "letter") result = ::reportpp::PageFormat::letter;
    else if (value == "legal") result = ::reportpp::PageFormat::legal;
    else if (value == "a3") result = ::reportpp::PageFormat::a3;
    else if (value == "a4") result = ::reportpp::PageFormat::a4;
    else if (value == "a5") result = ::reportpp::PageFormat::a5;
    else if (value == "b4") result = ::reportpp::PageFormat::b4;
    else if (value == "b5") result = ::reportpp::PageFormat::b5;
    else if (value == "executive") result = ::reportpp::PageFormat::executive;
    else if (value == "us4x6") result = ::reportpp::PageFormat::us4x6;
    else if (value == "us4x8") result = ::reportpp::PageFormat::us4x8;
    else if (value == "us5x7") result = ::reportpp::PageFormat::us5x7;
    else if (value == "comm10") result = ::reportpp::PageFormat::comm10;
    else throw std::runtime_error(std::string(value) + " is not a valid PageFormat value");
    return result;
}

}} // namespace reportpp::parser
