// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// convert_NAs
List convert_NAs(List original_frame);
RcppExport SEXP _edfR_convert_NAs(SEXP original_frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type original_frame(original_frameSEXP);
    rcpp_result_gen = Rcpp::wrap(convert_NAs(original_frame));
    return rcpp_result_gen;
END_RCPP
}
// library_version
CharacterVector library_version();
RcppExport SEXP _edfR_library_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(library_version());
    return rcpp_result_gen;
END_RCPP
}
// read_preamble_str
std::string read_preamble_str(std::string filename);
RcppExport SEXP _edfR_read_preamble_str(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(read_preamble_str(filename));
    return rcpp_result_gen;
END_RCPP
}
// read_edf_file
List read_edf_file(std::string filename, int consistency, bool import_events, bool import_recordings, bool import_samples, LogicalVector sample_attr_flag, std::string start_marker_string, std::string end_marker_string, NumericVector pixels_per_degree);
RcppExport SEXP _edfR_read_edf_file(SEXP filenameSEXP, SEXP consistencySEXP, SEXP import_eventsSEXP, SEXP import_recordingsSEXP, SEXP import_samplesSEXP, SEXP sample_attr_flagSEXP, SEXP start_marker_stringSEXP, SEXP end_marker_stringSEXP, SEXP pixels_per_degreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type consistency(consistencySEXP);
    Rcpp::traits::input_parameter< bool >::type import_events(import_eventsSEXP);
    Rcpp::traits::input_parameter< bool >::type import_recordings(import_recordingsSEXP);
    Rcpp::traits::input_parameter< bool >::type import_samples(import_samplesSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type sample_attr_flag(sample_attr_flagSEXP);
    Rcpp::traits::input_parameter< std::string >::type start_marker_string(start_marker_stringSEXP);
    Rcpp::traits::input_parameter< std::string >::type end_marker_string(end_marker_stringSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pixels_per_degree(pixels_per_degreeSEXP);
    rcpp_result_gen = Rcpp::wrap(read_edf_file(filename, consistency, import_events, import_recordings, import_samples, sample_attr_flag, start_marker_string, end_marker_string, pixels_per_degree));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_edfR_convert_NAs", (DL_FUNC) &_edfR_convert_NAs, 1},
    {"_edfR_library_version", (DL_FUNC) &_edfR_library_version, 0},
    {"_edfR_read_preamble_str", (DL_FUNC) &_edfR_read_preamble_str, 1},
    {"_edfR_read_edf_file", (DL_FUNC) &_edfR_read_edf_file, 9},
    {NULL, NULL, 0}
};

RcppExport void R_init_edfR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
