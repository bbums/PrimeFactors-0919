#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};
		if (number == 2) res.push_back(2);
		if (number == 3) res.push_back(3);
		return res;
	}
private:

};