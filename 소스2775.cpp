//부녀회장이 될테야
#include <stdio.h>
#include <stdlib.h>

int apartment(int floor, int room) {
	int num;

	if (floor == 0)
		return room;
	else if (room == 1)
		return 1;
	else
		return apartment(floor, room - 1) + apartment(floor - 1, room);
}

int main()
{
	int T;
	int k, n;
	scanf("%d", &T);

	int* res = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		res[i] = apartment(k, n);
	}

	for (int i = 0; i < T; i++)
		printf("%d\n", res[i]);

	return 0;
}