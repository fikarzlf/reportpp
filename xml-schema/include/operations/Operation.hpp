#ifndef PDF_OPERATION_H
#define PDF_OPERATION_H

#include <hpdf.h>
#include <vector>

struct Globals {
  HPDF_Doc                 pdf;
  std::vector< HPDF_Page > pages;

  unsigned int gmode; // actual graphics mode (see HPDF_GMODE_* in hpdf_constants.h)

  Globals(): pdf(nullptr), curMode(CurMode::NONE), gmode(0) { }
  HPDF_Page curPage() const { return pages.back(); }
};

/** Represents single operation over the pdf document.
 * The \c emit() method actually executes the inlined operation, using the
 * provided handler.
 */
class Operation {
public:
  virtual void emit(Globals &glob) { }
};

#endif /* ifndef PDF_OPERATION_H */
