#include <vector>

class PrimeFactors {
public:
	std::vector<int> of(int number) {
		std::vector<int> res = {};

		for (int devisor = 2; number > 1; devisor++) {
			tryDevideBy(devisor, number, res);
		}

		return res;
	}
	void tryDevideBy(int devisor, int& number, std::vector<int>& res)
	{
		while (number % devisor == 0) {
			res.push_back(devisor);
			number /= devisor;
		}
	}
};