// Not copyrighted - public domain.
//
// This sample parser implementation was generated by CodeSynthesis XSD,
// an XML Schema to C++ data binding compiler. You may use it in your
// programs without any restrictions.
//

#include "reportpp-pimpl.hxx"

#include <iostream>

namespace reportpp
{
  // textElement_pimpl
  //

  void textElement_pimpl::
  pre ()
  {
  }

  void textElement_pimpl::
  x (float x)
  {
    std::cout << "x: " << x << std::endl;
  }

  void textElement_pimpl::
  y (float y)
  {
    std::cout << "y: " << y << std::endl;
  }

  void textElement_pimpl::
  fontName (const ::std::string& fontName)
  {
    std::cout << "fontName: " << fontName << std::endl;
  }

  void textElement_pimpl::
  fontSize (long long fontSize)
  {
    std::cout << "fontSize: " << fontSize << std::endl;
  }

  void textElement_pimpl::
  fontStyle (const ::std::string& fontStyle)
  {
    std::cout << "fontStyle: " << fontStyle << std::endl;
  }

  void textElement_pimpl::
  post_textElement ()
  {
    const ::std::string& v (post_string ());

    std::cout << "textElement: " << v << std::endl;
  }

  // shapeType_pimpl
  //

  void shapeType_pimpl::
  pre ()
  {
  }

  ::reportpp::ShapeType shapeType_pimpl::
  post_shapeType ()
  {
    const ::std::string& v (post_string ());

    // TODO
    //
    // return ... ;
  }

  // shapeElement_pimpl
  //

  void shapeElement_pimpl::
  pre ()
  {
  }

  void shapeElement_pimpl::
  type (const ::reportpp::ShapeType& type)
  {
    // TODO
    //
  }

  void shapeElement_pimpl::
  x (float x)
  {
    std::cout << "x: " << x << std::endl;
  }

  void shapeElement_pimpl::
  y (float y)
  {
    std::cout << "y: " << y << std::endl;
  }

  void shapeElement_pimpl::
  width (float width)
  {
    std::cout << "width: " << width << std::endl;
  }

  void shapeElement_pimpl::
  height (float height)
  {
    std::cout << "height: " << height << std::endl;
  }

  void shapeElement_pimpl::
  post_shapeElement ()
  {
  }

  // imageElement_pimpl
  //

  void imageElement_pimpl::
  pre ()
  {
  }

  void imageElement_pimpl::
  src (const ::std::string& src)
  {
    std::cout << "src: " << src << std::endl;
  }

  void imageElement_pimpl::
  x (float x)
  {
    std::cout << "x: " << x << std::endl;
  }

  void imageElement_pimpl::
  y (float y)
  {
    std::cout << "y: " << y << std::endl;
  }

  void imageElement_pimpl::
  width (float width)
  {
    std::cout << "width: " << width << std::endl;
  }

  void imageElement_pimpl::
  height (float height)
  {
    std::cout << "height: " << height << std::endl;
  }

  void imageElement_pimpl::
  post_imageElement ()
  {
  }

  // pageBlock_pimpl
  //

  void pageBlock_pimpl::
  pre ()
  {
  }

  void pageBlock_pimpl::
  text ()
  {
  }

  void pageBlock_pimpl::
  label ()
  {
  }

  void pageBlock_pimpl::
  shape ()
  {
  }

  void pageBlock_pimpl::
  image ()
  {
  }

  void pageBlock_pimpl::
  post_pageBlock ()
  {
  }

  // ReportPage_pimpl
  //

  void ReportPage_pimpl::
  pre ()
  {
  }

  void ReportPage_pimpl::
  block ()
  {
  }

  void ReportPage_pimpl::
  pageFormat (const ::reportpp::PageFormat& pageFormat)
  {
    // TODO
    //
  }

  void ReportPage_pimpl::
  marginTop (float marginTop)
  {
    std::cout << "marginTop: " << marginTop << std::endl;
  }

  void ReportPage_pimpl::
  marginBottom (float marginBottom)
  {
    std::cout << "marginBottom: " << marginBottom << std::endl;
  }

  void ReportPage_pimpl::
  marginLeft (float marginLeft)
  {
    std::cout << "marginLeft: " << marginLeft << std::endl;
  }

  void ReportPage_pimpl::
  marginRight (float marginRight)
  {
    std::cout << "marginRight: " << marginRight << std::endl;
  }

  void ReportPage_pimpl::
  post_ReportPage ()
  {
  }
}