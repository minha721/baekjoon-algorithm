//1,2,3 ´õÇÏ±â
#include <iostream>
using namespace std;

int number(int n)
{
	int a[12];
	a[1] = 1, a[2] = 2, a[3] = 4;
	for (int i = 4; i < 12; i++)
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	return a[n];
}

int main()
{
	int test, n;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> n;
		cout << number(n) << endl;
	}
}