#include "gmock/gmock.h"
#include "checker.cpp"

using namespace testing;

TEST(Checker, lengthTest) {
	Checker check;
	EXPECT_EQ(MAX_SCORE, check.getLengthScore("A", "B"));
}
TEST(Checker, lengthTest2) {
	Checker check;
	EXPECT_EQ(MAX_SCORE, check.getLengthScore("ASD", "DSA"));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}