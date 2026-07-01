#include <string>
#include <algorithm>
#include "checker.h"
using std::string;
class Checker {
public:
	int getLengthScore(string a, string b) {
		int longSize = std::max(a.size(), b.size());
		int shortSize = std::min(a.size(), b.size());

		return calculateScore(longSize, shortSize);
	}

private:
	int calculateScore(int longSize, int shortSize) {
		double ratio = 1 - static_cast<double>(longSize - shortSize) / shortSize;
		return static_cast<int>(ratio * MAX_SCORE);
	}
};