//파도반 수열
#include <iostream>
using namespace std;

long long int num[100] = { 1,1,1,2,2,3,4,5,7,9 };

long long int padovan(int n) {
	if (n == 0)
		return 0;

	if (num[n - 1] == 0)
		num[n - 1] = padovan(n - 1) + padovan(n - 5);

	return num[n - 1];
}

int main() {
	int test;
	long long int n;
	cin >> test;
	for (int i = 0; i < test; i++) {
		cin >> n;
		cout << padovan(n) << endl;
	}
}