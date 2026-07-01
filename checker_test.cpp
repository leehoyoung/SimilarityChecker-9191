#include "gmock/gmock.h"
#include "checker.cpp"

using namespace testing;

TEST(Checker, lengthTest) {
	Checker check;
	EXPECT_EQ(0, check.getLengthScore("A", "B"));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}