//º°Âï±â5
#include <iostream>
using namespace std;

int main()
{
	int num, jul, add;
	cin >> num;
	jul = 0;
	add = num - 1;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num + jul; j++)
		{
			if (j < add)
				cout << " ";
			else
				cout << "*";
		}
		cout << endl;
		jul++;
		add--;
	}
}