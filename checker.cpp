#include <string>
#include <algorithm>
#include "checker.h"
using std::string;
class Checker {
public:
	int getLengthScore(string a, string b) {
		int longSize = std::max(a.size(), b.size());
		int shortSize = std::min(a.size(), b.size());

		return (1 - (longSize - shortSize) / shortSize) * MAX_SCORE;
	}

};