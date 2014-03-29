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

#ifndef PDF_RECTANGLE_OPERATION_H
#define PDF_RECTANGLE_OPERATION_H

#include "Operation.hpp"

/// Draws a simple rectangle using the previously defined graphics settings.
class RectangleOp: public Operation {
public:
  RectangleOp(float x, float y, float w, float h):
    Operation(),
    x_(x),
    y_(y),
    w_(w),
    h_(h)
  { }

  static const unsigned int gmode_pre  = HPDF_GMODE_PAGE_DESCRIPTION | HPDF_GMODE_PATH_OBJECT;
  static const unsigned int gmode_post = HPDF_GMODE_PATH_OBJECT;

  void init(ReportGlobals &glob) {
    HPDF_Page_Rectangle(glob.pages.back(), x_, y_, w_, h_);
  }

  void end     (ReportGlobals &glob) { }
  void finalize(ReportGlobals &glob) { }

private:
  float x_;
  float y_;
  float w_;
  float h_;
};

#endif /* ifndef PDF_RECTANGLE_OPERATION_H */
