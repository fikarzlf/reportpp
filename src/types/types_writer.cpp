#include "reportpp/types/PageFormat.hpp"
#include "reportpp/types/ReportPage.hpp"

#include <ostream>

std::ostream& operator << (std::ostream& os, const reportpp::PageFormat& obj) {
    switch (obj) {
        case reportpp::PageFormat::letter: os << "reportpp::PageFormat::letter"; break;
        case reportpp::PageFormat::legal: os << "reportpp::PageFormat::legal"; break;
        case reportpp::PageFormat::a3: os << "reportpp::PageFormat::a3"; break;
        case reportpp::PageFormat::a4: os << "reportpp::PageFormat::a4"; break;
        case reportpp::PageFormat::a5: os << "reportpp::PageFormat::a5"; break;
        case reportpp::PageFormat::b4: os << "reportpp::PageFormat::b4"; break;
        case reportpp::PageFormat::b5: os << "reportpp::PageFormat::b5"; break;
        case reportpp::PageFormat::executive: os << "reportpp::PageFormat::executive"; break;
        case reportpp::PageFormat::us4x6: os << "reportpp::PageFormat::us4x6"; break;
        case reportpp::PageFormat::us4x8: os << "reportpp::PageFormat::us4x8"; break;
        case reportpp::PageFormat::us5x7: os << "reportpp::PageFormat::us5x7"; break;
        case reportpp::PageFormat::comm10: os << "reportpp::PageFormat::comm10"; break;
        default: os << "unknown!"; break;
    }
   return os;
}

std::ostream& operator << (std::ostream& os, const reportpp::ReportPage& obj) {
    switch (obj) {
        case reportpp::PageFormat::letter: os << "reportpp::PageFormat::letter"; break;
        case reportpp::PageFormat::legal: os << "reportpp::PageFormat::legal"; break;
        case reportpp::PageFormat::a3: os << "reportpp::PageFormat::a3"; break;
        case reportpp::PageFormat::a4: os << "reportpp::PageFormat::a4"; break;
        case reportpp::PageFormat::a5: os << "reportpp::PageFormat::a5"; break;
        case reportpp::PageFormat::b4: os << "reportpp::PageFormat::b4"; break;
        case reportpp::PageFormat::b5: os << "reportpp::PageFormat::b5"; break;
        case reportpp::PageFormat::executive: os << "reportpp::PageFormat::executive"; break;
        case reportpp::PageFormat::us4x6: os << "reportpp::PageFormat::us4x6"; break;
        case reportpp::PageFormat::us4x8: os << "reportpp::PageFormat::us4x8"; break;
        case reportpp::PageFormat::us5x7: os << "reportpp::PageFormat::us5x7"; break;
        case reportpp::PageFormat::comm10: os << "reportpp::PageFormat::comm10"; break;
        default: os << "unknown!"; break;
    }
   return os;
}
