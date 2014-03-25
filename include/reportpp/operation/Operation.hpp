#ifndef PDF_OPERATION_H
#define PDF_OPERATION_H

#include "../ReportGlobals.hpp"

/** Represents single operation over the pdf document.
 * Three methods needs to be implemented:
 * - \c init which is called at the begin of page creation
 * - \c end  which is called at the end of page creation, before passing to the
 * next page
 * - \c finalize which is called at document finalization, when all pages are
 * created and filled with input data. This stage may be useful, as an example,
 * for printing the number of pages available in the document or for creating
 * an index.
 */
class Operation {
public:
  virtual void init    (ReportGlobals &glob) = 0;
  virtual void end     (ReportGlobals &glob) = 0;
  virtual void finalize(ReportGlobals &glob) = 0;
};

#endif /* ifndef PDF_OPERATION_H */
