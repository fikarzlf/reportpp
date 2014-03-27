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
 * Copyright (C) 2014, mickey <michele85@msn.com>
 */

class Gmode {
public:
  GMode &operator=(const GMode &&newMode) {
    
  }
private:
  unsigned int gmode;
};

class TextObject: public GMode {
  TextObject(HPDF_Page page): page_(page) { }
  ~TextObject() { HPDF_Page_EndText(page_); }
private:
  HPDF_Page page_;
};
