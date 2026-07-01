#include <string>
using std::string;
class Checker {
public:
	int getLengthScore(string a, string b) {
		int longSize;
		int shortSize;

		if (a.size() - b.size() > 0) {
			longSize = a.size();
			shortSize = b.size();
		}
		else {
			longSize = b.size();
			shortSize = a.size();
		}

		return (1 - (longSize - shortSize) / shortSize) * 60;
	}

};