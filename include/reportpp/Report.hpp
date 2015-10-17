#ifndef REPORTPP_REPORT_IMPL_H
#define REPORTPP_REPORT_IMPL_H

#include "reportpp/parser/reportpp-pskel.hxx"

namespace reportpp {

class Report: public reportpp::reportType_pskel {
public:
    void pre();

    void frontPage();
    void firstPage();
    void dataPage();
    void lastPage();

    void pageFormat(const PageFormat&);
    void marginTop(float);
    void marginBottom(float);
    void marginLeft(float);
    void marginRight(float);

    void post_reportType();
};

} // namesapace reportpp

#endif // REPORTPP_REPORT_IMPL_H