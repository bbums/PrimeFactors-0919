#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};
		if (number >= 2) {
			tryDevideBy(2, number, res);
			tryDevideBy(3, number, res);
			if(number != 1)
				res.push_back(number);
		}

		return res;
	}
	void tryDevideBy(int devider, int& number, std::vector<int>& res)
	{
		while (number % devider == 0) {
			res.push_back(devider);
			number /= devider;
		}
	}
private:

};