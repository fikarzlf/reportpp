#ifndef PDF_STROKE_OPERATION_H
#define PDF_STROKE_OPERATION_H

#include "Operation.hpp"

/** Represents single operation over the pdf document.
 * The \c emit() method actually executes the inlined operation, using the
 * provided handler.
 */
class StrokeOp: public Operation {
public:
  virtual void init    (ReportGlobals &glob) { }
  virtual void end     (ReportGlobals &glob) { HPDF_Page_Stroke(glob.pages.back()); }
  virtual void finalize(ReportGlobals &glob) { }
};

#endif /* ifndef PDF_STROKE_OPERATION_H */
