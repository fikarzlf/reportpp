#ifndef SUPPORT_CALLERS_HPP
#define SUPPORT_CALLERS_HPP

#include "../ReportGlobals.hpp"

class InitCaller {
public:
  InitCaller(ReportGlobals &glob): glob_(glob) { }

  template< typename T >
  void operator()(T &item) { item->init(glob_); }
private:
  ReportGlobals &glob_;
};

class EndCaller {
public:
  EndCaller(ReportGlobals &glob): glob_(glob) { }

  template< typename T >
  void operator()(T &item) { item->end(glob_); }
private:
  ReportGlobals &glob_;
};

class FinalizeCaller {
public:
  FinalizeCaller(ReportGlobals &glob): glob_(glob) { }

  template< typename T >
  void operator()(T &item) { item->finalize(glob_); }
private:
  ReportGlobals &glob_;
};

#endif /* ifndef SUPPORT_CALLERS_HPP */
