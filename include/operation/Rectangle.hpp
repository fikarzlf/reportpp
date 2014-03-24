#ifndef PDF_RECTANGLE_OPERATION_H
#define PDF_RECTANGLE_OPERATION_H

#include "Operation.hpp"

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
