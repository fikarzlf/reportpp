#ifndef PDF_OPERATION_H
#define PDF_OPERATION_H

#include "../ReportGlobals.hpp"

/** Represents single operation over the pdf document.
 * The \c emit() method actually executes the inlined operation, using the
 * provided handler.
 */
class Operation {
public:
  virtual void init    (ReportGlobals &glob) = 0;
  virtual void end     (ReportGlobals &glob) = 0;
  virtual void finalize(ReportGlobals &glob) = 0;
};

#endif /* ifndef PDF_OPERATION_H */
