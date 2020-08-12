//더하기 사이클

#include <stdio.h>

int cycle(int n) {
	int tenth, units;
	int temp;
	int newnum;

	tenth = n / 10;
	units = n % 10;
	temp = (tenth + units) % 10;
	newnum = units * 10 + temp;

	return newnum;
}

int main()
{
	int num, cyclenum;
	int cnt = 0;
	scanf_s("%d", &num);

	cyclenum = cycle(num);
	while (1) {
		if (cyclenum == num) {
			cnt++;
			break;
		}
		else {
			cnt++;
			cyclenum = cycle(cyclenum);
		}

	}

	printf("%d\n", cnt);
}