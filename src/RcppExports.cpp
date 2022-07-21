// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// compiled_library_status
bool compiled_library_status();
RcppExport SEXP _eyelinkReader_compiled_library_status() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(compiled_library_status());
    return rcpp_result_gen;
END_RCPP
}
// convert_NAs
List convert_NAs(List original_frame);
RcppExport SEXP _eyelinkReader_convert_NAs(SEXP original_frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type original_frame(original_frameSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_NAs(original_frame));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_eyelinkReader_compiled_library_status", (DL_FUNC) &_eyelinkReader_compiled_library_status, 0},
    {"_eyelinkReader_convert_NAs", (DL_FUNC) &_eyelinkReader_convert_NAs, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_eyelinkReader(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
