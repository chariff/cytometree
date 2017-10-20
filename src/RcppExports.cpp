// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// FmeasureC
double FmeasureC(NumericVector pred, NumericVector ref);
RcppExport SEXP _cytometree_FmeasureC(SEXP predSEXP, SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(FmeasureC(pred, ref));
    return rcpp_result_gen;
END_RCPP
}
// FmeasureC_no0
double FmeasureC_no0(NumericVector pred, NumericVector ref);
RcppExport SEXP _cytometree_FmeasureC_no0(SEXP predSEXP, SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type pred(predSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(FmeasureC_no0(pred, ref));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cytometree_FmeasureC", (DL_FUNC) &_cytometree_FmeasureC, 2},
    {"_cytometree_FmeasureC_no0", (DL_FUNC) &_cytometree_FmeasureC_no0, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cytometree(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
