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
