#include <reportpp/ReportGen.hpp>
#include <reportpp/operation/Rectangle.hpp>
#include <reportpp/operation/Stroke.hpp>

void initFrontPage(PageExecutor &fp) {
  BlockExecutor &bEx = fp.addBlock();
  bEx.appendOperation(RectangleOp(15, 10, 30, 45));
  bEx.appendOperation(StrokeOp());
}

int main() {
  ReportGen gen;
  initFrontPage(gen.getFrontPage());
  gen.addDataPage();
  std::list< std::string > record = { "ciao" };
  gen.addRecord(record);
  gen.finalizeDocument();
  gen.saveToFile("report.pdf");
}
