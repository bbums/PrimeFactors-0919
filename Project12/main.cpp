#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);
}

int main() {
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}