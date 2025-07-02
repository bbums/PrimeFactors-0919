#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};
		if (number >= 2) {
			while (number % 2 == 0) {
				res.push_back(2);
				number /= 2;
			}
			if(number != 1)
				res.push_back(number);
		}
		return res;
	}
private:

};