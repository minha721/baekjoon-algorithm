//¶óµð¿À
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int A, B, N, tmp, num, gap = 1000;
	cin >> A >> B >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		if (abs(B - tmp) < gap)
			gap = abs(B - tmp);
	}
	num = (gap + 1) < abs(A - B) ? gap + 1 : abs(A - B);
	cout << num;
}