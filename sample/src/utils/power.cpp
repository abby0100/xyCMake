#include "utils/power.hpp"

int power(double base, int exponent) {

	if (0 == exponent) {
		return 1;
	}

	int result = base;
	for(int i = 1; i < exponent; ++i) {
		result *= base;
	}

	return result;
}
