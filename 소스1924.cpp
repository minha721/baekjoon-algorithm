//2007³â

#include <stdio.h>
#define MONTH 12
#define DAY 7

int main() {
	int month[MONTH] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char day[7][4] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x, y;
	int total_date = 0;

	scanf("%d %d", &x, &y);

	for (int i = 1; i < x; i++) {
		total_date += month[i - 1];
	}
	total_date += y;

	printf("%s\n", day[total_date % 7]);

	return 0;
}