// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ExhaustiveSearchCpp
Rcpp::List ExhaustiveSearchCpp(const arma::mat& XInput, const std::vector<double>& yInput, const arma::mat& XTestSet, const std::vector<double>& yTestSet, std::string family, std::string performanceMeasure, bool intercept, size_t combsUpTo, size_t nResults, size_t nThreads, double errorVal, bool quietly);
RcppExport SEXP _ExhaustiveSearch_ExhaustiveSearchCpp(SEXP XInputSEXP, SEXP yInputSEXP, SEXP XTestSetSEXP, SEXP yTestSetSEXP, SEXP familySEXP, SEXP performanceMeasureSEXP, SEXP interceptSEXP, SEXP combsUpToSEXP, SEXP nResultsSEXP, SEXP nThreadsSEXP, SEXP errorValSEXP, SEXP quietlySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type XInput(XInputSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type yInput(yInputSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type XTestSet(XTestSetSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type yTestSet(yTestSetSEXP);
    Rcpp::traits::input_parameter< std::string >::type family(familySEXP);
    Rcpp::traits::input_parameter< std::string >::type performanceMeasure(performanceMeasureSEXP);
    Rcpp::traits::input_parameter< bool >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< size_t >::type combsUpTo(combsUpToSEXP);
    Rcpp::traits::input_parameter< size_t >::type nResults(nResultsSEXP);
    Rcpp::traits::input_parameter< size_t >::type nThreads(nThreadsSEXP);
    Rcpp::traits::input_parameter< double >::type errorVal(errorValSEXP);
    Rcpp::traits::input_parameter< bool >::type quietly(quietlySEXP);
    rcpp_result_gen = Rcpp::wrap(ExhaustiveSearchCpp(XInput, yInput, XTestSet, yTestSet, family, performanceMeasure, intercept, combsUpTo, nResults, nThreads, errorVal, quietly));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ExhaustiveSearch_ExhaustiveSearchCpp", (DL_FUNC) &_ExhaustiveSearch_ExhaustiveSearchCpp, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_ExhaustiveSearch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
