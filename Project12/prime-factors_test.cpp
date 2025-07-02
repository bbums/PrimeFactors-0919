#include <vector>
#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactors prime_factor;
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}
