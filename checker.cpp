#include <string>
#include <algorithm>
#include <cmath>
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
		if (longSize >= shortSize * 2) {
			return 0;
		}

		double ratio = 2 - static_cast<double>(longSize) / shortSize;
		return static_cast<int>(std::round(ratio * MAX_SCORE));
	}
};