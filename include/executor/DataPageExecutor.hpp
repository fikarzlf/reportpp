/*
 T his program is free s*oftware; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor,
 Boston, MA  02110-1301, USA.
 
 ---
 Copyright (C) 2014, mickey <mickey.mouse-1985@libero.it>
 */

#ifndef DATAPAGE_EXECUTOR_HPP
#define DATAPAGE_EXECUTOR_HPP

// #include "BlockExecutor.hpp"

class DataPageExecutor: public PageExecutor {
public:
  DataPageExecutor() { }
  ~DataPageExecutor() { }

//   void appendBlock(const BlockExecutor &block) {
//     blocks_.emplace_back(block);
//   }
// 
//   void init(ReportGlobals &glob) {
//     std::for_each(blocks_.begin(), blocks_.end(), [](BlockExecutor &block, ReportGlobals &glob){ block.init(glob); });
//   }
// 
//   void end(ReportGlobals &glob) {
//     std::for_each(blocks_.begin(), blocks_.end(), [](BlockExecutor &block, ReportGlobals &glob){ block.end(glob); });
//   }
// 
//   void finalize(ReportGlobals &glob) {
//     std::for_each(blocks_.begin(), blocks_.end(), [](BlockExecutor &block, ReportGlobals &glob){ block.finalize(glob); });
//   }
// 
// private:
//   std::list< BlockExecutor > blocks_;
};

#endif /* ifndef DATAPAGE_EXECUTOR_HPP */
