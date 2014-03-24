#include <ReportGen.hpp>

#include <operation/Rectangle.hpp>

PageExecutor createFrontPage() {
  BlockExecutor bEx;
  bEx.appendOperation(RectangleOp(15, 10, 30, 45));
  PageExecutor pEx;
  pEx.appendBlock(bEx);
  return pEx;
}

int main() {
  ReportGen gen;
  gen.setFrontPage(createFrontPage());
  std::list< std::string > record;
  gen.addRecord(record);
  gen.finalizeDocument();
  gen.saveToFile("report.pdf");
}
