#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};

		if (number >= 2) {
			for (int devisor = 2; devisor <= 3 && number != 1; devisor++) {
				tryDevideBy(devisor, number, res);
			}
		}

		if (number != 1)
			res.push_back(number);

		return res;
	}
	void tryDevideBy(int devisor, int& number, std::vector<int>& res)
	{
		while (number % devisor == 0) {
			res.push_back(devisor);
			number /= devisor;
		}
	}
private:

};