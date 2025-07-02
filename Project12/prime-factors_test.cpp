#include <vector>
#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

class PrimeFactorsFixture : public Test {
public:
	PrimeFactors prime_factor;
};

TEST_F(PrimeFactorsFixture, Of1) {
	std::vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFactorsFixture, Of2) {
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}

TEST_F(PrimeFactorsFixture, Of3) {
	std::vector<int> expected = {3};
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFactorsFixture, Of4) {
	std::vector<int> expected = {2, 2};
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFactorsFixture, Of5) {
	std::vector<int> expected = {2, 3};
	EXPECT_EQ(expected, prime_factor.of(6));
}
