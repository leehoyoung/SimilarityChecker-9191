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
TEST(Checker, lengthTest3) {
	Checker check;
	EXPECT_EQ(40, check.getLengthScore("ABC", "ABCD"));
}
TEST(Checker, lengthTest4) {
	Checker check;
	EXPECT_EQ(23, check.getLengthScore("ABCDEFGH", "ABCDEFGHIJKLM"));
}
TEST(Checker, lengthTest5) {
	Checker check;
	EXPECT_EQ(0, check.getLengthScore("A", "ABA"));
}
int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}