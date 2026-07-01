#include <string>
using std::string;
class Checker {
public:
	int getLengthScore(string a, string b) {
		if (a.size() == b.size()) {
			return 0;
		}
		return 60;
	}

};