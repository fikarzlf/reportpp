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

#ifndef PAGE_EXECUTOR_HPP
#define PAGE_EXECUTOR_HPP

#include "BlockExecutor.hpp"

class PageExecutor {
public:
  PageExecutor() { }
  ~PageExecutor() { }

  BlockExecutor &addBlock() {
    blocks_.emplace_back(new BlockExecutor());
    return *(blocks_.back());
  }

  void init(ReportGlobals &glob) {
    glob.pages.emplace_back(HPDF_AddPage(glob.pdf));
    std::for_each(blocks_.begin(), blocks_.end(), InitCaller(glob));
  }

  void end(ReportGlobals &glob) {
    std::for_each(blocks_.begin(), blocks_.end(), EndCaller(glob));
  }

  void finalize(ReportGlobals &glob, unsigned int pageNo) {
    std::for_each(blocks_.begin(), blocks_.end(), FinalizeCaller(glob));
  }

private:
  std::list< std::unique_ptr< BlockExecutor > > blocks_;
};

#endif /* ifndef PAGE_EXECUTOR_HPP */
