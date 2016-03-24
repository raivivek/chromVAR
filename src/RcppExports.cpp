// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_normalized_counts
arma::sp_mat get_normalized_counts(arma::sp_mat counts, const arma::vec expectation, const arma::rowvec fragments_per_sample);
RcppExport SEXP chromVAR_get_normalized_counts(SEXP countsSEXP, SEXP expectationSEXP, SEXP fragments_per_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type expectation(expectationSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type fragments_per_sample(fragments_per_sampleSEXP);
    __result = Rcpp::wrap(get_normalized_counts(counts, expectation, fragments_per_sample));
    return __result;
END_RCPP
}
// dummy0
void dummy0(const arma::uword peak, arma::sp_mat counts, const arma::umat background_peaks, const arma::vec expectation, const List counts_info, bool intermediates, bool norm);
RcppExport SEXP chromVAR_dummy0(SEXP peakSEXP, SEXP countsSEXP, SEXP background_peaksSEXP, SEXP expectationSEXP, SEXP counts_infoSEXP, SEXP intermediatesSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::uword >::type peak(peakSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::umat >::type background_peaks(background_peaksSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type expectation(expectationSEXP);
    Rcpp::traits::input_parameter< const List >::type counts_info(counts_infoSEXP);
    Rcpp::traits::input_parameter< bool >::type intermediates(intermediatesSEXP);
    Rcpp::traits::input_parameter< bool >::type norm(normSEXP);
    dummy0(peak, counts, background_peaks, expectation, counts_info, intermediates, norm);
    return R_NilValue;
END_RCPP
}
// get_normalized_counts
arma::sp_mat get_normalized_counts(arma::sp_mat counts, const arma::vec expectation, const arma::rowvec fragments_per_sample);
RcppExport SEXP chromVAR_get_normalized_counts(SEXP countsSEXP, SEXP expectationSEXP, SEXP fragments_per_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type expectation(expectationSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type fragments_per_sample(fragments_per_sampleSEXP);
    __result = Rcpp::wrap(get_normalized_counts(counts, expectation, fragments_per_sample));
    return __result;
END_RCPP
}
// dummy1
arma::mat dummy1(const arma::sp_mat mat1, const arma::sp_mat mat2);
RcppExport SEXP chromVAR_dummy1(SEXP mat1SEXP, SEXP mat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::sp_mat >::type mat1(mat1SEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat >::type mat2(mat2SEXP);
    __result = Rcpp::wrap(dummy1(mat1, mat2));
    return __result;
END_RCPP
}
// compute_deviations_single_peak_sparse2
List compute_deviations_single_peak_sparse2(const arma::uword peak, arma::sp_mat counts, const arma::umat background_peaks, const arma::vec expectation, const List counts_info, bool intermediates, bool norm);
RcppExport SEXP chromVAR_compute_deviations_single_peak_sparse2(SEXP peakSEXP, SEXP countsSEXP, SEXP background_peaksSEXP, SEXP expectationSEXP, SEXP counts_infoSEXP, SEXP intermediatesSEXP, SEXP normSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::uword >::type peak(peakSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::umat >::type background_peaks(background_peaksSEXP);
    Rcpp::traits::input_parameter< const arma::vec >::type expectation(expectationSEXP);
    Rcpp::traits::input_parameter< const List >::type counts_info(counts_infoSEXP);
    Rcpp::traits::input_parameter< bool >::type intermediates(intermediatesSEXP);
    Rcpp::traits::input_parameter< bool >::type norm(normSEXP);
    __result = Rcpp::wrap(compute_deviations_single_peak_sparse2(peak, counts, background_peaks, expectation, counts_info, intermediates, norm));
    return __result;
END_RCPP
}
// p_to_score
double p_to_score(const NumericMatrix pwm, const NumericVector bg, const double p);
RcppExport SEXP chromVAR_p_to_score(SEXP pwmSEXP, SEXP bgSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type pwm(pwmSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type bg(bgSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    __result = Rcpp::wrap(p_to_score(pwm, bg, p));
    return __result;
END_RCPP
}
// motif_match
std::vector<int> motif_match(const NumericMatrix mat, const std::vector< std::string > x, const NumericVector nuc_freqs, const double p);
RcppExport SEXP chromVAR_motif_match(SEXP matSEXP, SEXP xSEXP, SEXP nuc_freqsSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< const std::vector< std::string > >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type nuc_freqs(nuc_freqsSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    __result = Rcpp::wrap(motif_match(mat, x, nuc_freqs, p));
    return __result;
END_RCPP
}
// motif_multi_match
List motif_multi_match(List pwms, std::vector< std::string > x, NumericVector nuc_freqs, const double p);
RcppExport SEXP chromVAR_motif_multi_match(SEXP pwmsSEXP, SEXP xSEXP, SEXP nuc_freqsSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type pwms(pwmsSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nuc_freqs(nuc_freqsSEXP);
    Rcpp::traits::input_parameter< const double >::type p(pSEXP);
    __result = Rcpp::wrap(motif_multi_match(pwms, x, nuc_freqs, p));
    return __result;
END_RCPP
}
// motif_match_score
NumericVector motif_match_score(NumericMatrix mat, std::vector< std::string > x);
RcppExport SEXP chromVAR_motif_match_score(SEXP matSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type x(xSEXP);
    __result = Rcpp::wrap(motif_match_score(mat, x));
    return __result;
END_RCPP
}
