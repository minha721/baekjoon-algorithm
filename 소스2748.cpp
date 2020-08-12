//피보나치수2
#include <iostream>
using namespace std;

long long int fibo(int n)
{
	long long int a = 0, b = 1, c;
	for (int i = 1; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int n;
	cin >> n;
	if (n == 0)
		cout << "0";
	else if (n == 1)
		cout << "1";
	else
		cout << fibo(n);
	return 0;
}