//날짜계산

#include <iostream>
using namespace std;

int main()
{
	int E, S, M;
	cin >> E >> S >> M;

	int year = 1;
	int year_E = 1;
	int year_S = 1;
	int year_M = 1;

	while (1)
	{
		if (year_E == E && year_S == S && year_M == M)
			break;

		year += 1;
		year_E += 1;
		year_S += 1;
		year_M += 1;

		if (year_E > 15)
			year_E = 1;

		if (year_S > 28)
			year_S = 1;

		if (year_M > 19)
			year_M = 1;
	}

	cout << year;
}