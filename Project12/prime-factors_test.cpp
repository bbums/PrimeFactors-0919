#include <vector>
#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

TEST(PrimeFactors, Of1) {
	PrimeFactors prime_factor;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}
