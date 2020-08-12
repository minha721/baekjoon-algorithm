//¹úÁı

#include <iostream>
using namespace std;

int main()
{
	long long int n;
	cin >> n;

	int layer = 1;
	long long int range = 1;
	long long int i = 1;

	while (1) {
		if (range >= n)
			break;
		i = 6 * layer;
		range += i;
		layer++;
	}

	cout << layer;
}