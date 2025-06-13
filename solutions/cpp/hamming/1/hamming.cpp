#include "hamming.h"
#include <string>
#include <cstring>
#include <stdexcept>

using namespace std;

namespace hamming {

	int compute(string strandA, string strandB) {
		if (strlen(strandA.c_str()) != strlen(strandB.c_str()))
			throw domain_error("strings must be the same length");

		int diff = 0;
		for (size_t i = 0; i < strandA.length(); i++) {
			diff += strandA[i] == strandB[i] ? 0 : 1;
		}

		return diff;
	}
}  // namespace hamming
