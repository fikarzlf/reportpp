
class Gmode {
public:
  GMode &operator=(const GMode &&newMode) {
    
  }
private:
  unsigned int gmode;
};

class TextObject: public GMode {
  TextObject(HPDF_Page page): page_(page) { }
  ~TextObject() { HPDF_Page_EndText(page_); }
private:
  HPDF_Page page_;
};