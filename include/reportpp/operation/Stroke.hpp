#ifndef PDF_STROKE_OPERATION_H
#define PDF_STROKE_OPERATION_H

#include "Operation.hpp"

/// Completes a graphic drawing operation using the \c HPDF_Page_Stroke method.
class StrokeOp: public Operation {
public:
  virtual void init    (ReportGlobals &glob) { HPDF_Page_Stroke(glob.pages.back()); }
  virtual void end     (ReportGlobals &glob) { }
  virtual void finalize(ReportGlobals &glob) { }
};

#endif /* ifndef PDF_STROKE_OPERATION_H */
