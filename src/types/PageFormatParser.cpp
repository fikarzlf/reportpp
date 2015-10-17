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

#include "PageFormatParser.hpp"

#include <iostream>
#include <stdexcept>

std::ostream& operator << (std::ostream& os, const reportpp::PageFormat& obj) {
    switch (obj) {
        case reportpp::PageFormat::letter: os << "reportpp::PageFormat::letter"; break;
        case reportpp::PageFormat::legal: os << "reportpp::PageFormat::legal"; break;
        case reportpp::PageFormat::a3: os << "reportpp::PageFormat::a3"; break;
        case reportpp::PageFormat::a4: os << "reportpp::PageFormat::a4"; break;
        case reportpp::PageFormat::a5: os << "reportpp::PageFormat::a5"; break;
        case reportpp::PageFormat::b4: os << "reportpp::PageFormat::b4"; break;
        case reportpp::PageFormat::b5: os << "reportpp::PageFormat::b5"; break;
        case reportpp::PageFormat::executive: os << "reportpp::PageFormat::executive"; break;
        case reportpp::PageFormat::us4x6: os << "reportpp::PageFormat::us4x6"; break;
        case reportpp::PageFormat::us4x8: os << "reportpp::PageFormat::us4x8"; break;
        case reportpp::PageFormat::us5x7: os << "reportpp::PageFormat::us5x7"; break;
        case reportpp::PageFormat::comm10: os << "reportpp::PageFormat::comm10"; break;
        default: os << "unknown!"; break;
    }
   return os;
}

namespace reportpp {

PageFormat PageFormatParser::post_tPageFormat() {
    PageFormat result;
    const std::string &value(post_string());

    if (value == "letter") result = PageFormat::letter;
    else if (value == "legal") result = PageFormat::legal;
    else if (value == "a3") result = PageFormat::a3;
    else if (value == "a4") result = PageFormat::a4;
    else if (value == "a5") result = PageFormat::a5;
    else if (value == "b4") result = PageFormat::b4;
    else if (value == "b5") result = PageFormat::b5;
    else if (value == "executive") result = PageFormat::executive;
    else if (value == "us4x6") result = PageFormat::us4x6;
    else if (value == "us4x8") result = PageFormat::us4x8;
    else if (value == "us5x7") result = PageFormat::us5x7;
    else if (value == "comm10") result = PageFormat::comm10;
    else throw std::runtime_error(std::string(value) + " is not a valid PageFormat value");
    return result;
}

} // namespace reportpp
