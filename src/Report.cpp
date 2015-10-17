#include "../include/reportpp/Report.hpp"

#include <iostream>

std::ostream& operator << (std::ostream& os, const ::reportpp::PageFormat& obj) {
   os << static_cast<std::underlying_type<::reportpp::PageFormat>::type>(obj);
   return os;
}


namespace reportpp {

void Report::pre() {
    std::clog << "pre() called" << std::endl;
}

void Report::frontPage() {
    std::clog << "frontPage() called" << std::endl;
}

void Report::firstPage() {
    std::clog << "firstPage() called" << std::endl;
}

void Report::dataPage() {
    std::clog << "dataPage() called" << std::endl;
}

void Report::lastPage() {
    std::clog << "lastPage() called" << std::endl;
}


void Report::pageFormat(const PageFormat &format) {
    std::clog << "pageFormat() called with " << format << " arg" << std::endl;
}

void Report::marginTop(float) {
    std::clog << "marginTop() called" << std::endl;
}

void Report::marginBottom(float) {
    std::clog << "marginBottom() called" << std::endl;
}

void Report::marginLeft(float) {
    std::clog << "marginLeft() called" << std::endl;
}

void Report::marginRight(float) {
    std::clog << "marginRight() called" << std::endl;
}


void Report::post_reportType() {
    std::clog << "post_reportType() called" << std::endl;
}

} // namespace reportpp
