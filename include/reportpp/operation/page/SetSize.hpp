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

#ifndef PDF_PAGE_SETSIZE_OPERATION_H
#define PDF_PAGE_SETSIZE_OPERATION_H

#include "../Operation.hpp"

enum class PageFormat {
  letter    = HPDF_PAGE_SIZE_LETTER,
  legal     = HPDF_PAGE_SIZE_LEGAL,
  a3        = HPDF_PAGE_SIZE_A3,
  a4        = HPDF_PAGE_SIZE_A4,
  a5        = HPDF_PAGE_SIZE_A5,
  b4        = HPDF_PAGE_SIZE_B4,
  b5        = HPDF_PAGE_SIZE_B5,
  executive = HPDF_PAGE_SIZE_EXECUTIVE,
  us4x6     = HPDF_PAGE_SIZE_US4x6,
  us4x8     = HPDF_PAGE_SIZE_US4x8,
  us5x7     = HPDF_PAGE_SIZE_US5x7,
  comm10    = HPDF_PAGE_SIZE_COMM10
};

enum class PageDirection {
  portrait  = HPDF_PAGE_PORTRAIT,
  landscape = HPDF_PAGE_LANDSCAPE
};

/// Modify size and direction of current page to predefined values.
class PageSetSize: public Operation {
public:
  PageSetSize(PageFormat format, PageDirection direction):
    Operation(),
    format_(format),
    direction_(direction)
  { }

  void init(ReportGlobals &glob) {
    HPDF_Page_SetSize(glob.pages.back(), format_, direction_);
  }

  void end     (ReportGlobals &glob) { }
  void finalize(ReportGlobals &glob) { }

private:
  PageFormat    format_;
  PageDirection direction_;
};

#endif /* ifndef PDF_PAGE_SETSIZE_OPERATION_H */
