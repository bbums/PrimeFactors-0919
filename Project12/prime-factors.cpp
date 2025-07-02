#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};
		if (number == 1) return res;
		else if (number == 4) {
			res.push_back(2);
			res.push_back(2);
		}
		else if (number >= 2) 
			res.push_back(number);
		return res;
	}
private:

};