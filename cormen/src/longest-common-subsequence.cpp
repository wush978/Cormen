/*
 * longest-common-subsequence.cpp
 *
 *  Created on: Jul 3, 2012
 *      Author: wush
 */

#include <stdexcept>
#include <string>
#include <vector>
#include <algorithm>
#include "cormen.hpp"

using namespace Rcpp;

SEXP LongestCommonSubsequence(SEXP Rstring_vec) {
	BEGIN_RCPP
	std::vector<std::string> string_vec(as(Rstring_vec));
	if (string_vec.size() < 2) {
		throw std::invalid_argument("The length of input character vector should not less than 2");
	}
	std::string& str1(string_vec[0]);
	std::string& str2(string_vec[1]);
	IntegerMatrix Length(str1.size(), str2.size());

	for(size_t sum(0);sum + 1 < str1.size() + str2.size();sum++) {
		for(size_t i(0);i < std::min(str1.size(), sum);i++) {

		}
	}

	END_RCPP
}




