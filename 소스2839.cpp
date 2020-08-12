//º≥≈¡πË¥ﬁ
#include <stdio.h>

int main()
{
	int N, five_num = 0, three_num = 0, total_num = 0;
	scanf("%d", &N);

	if (N == 1 || N == 2 || N == 4 || N == 7) {
		total_num = -1;
	}
	else if (N % 5 == 0)
	{
		five_num = N / 5;
		total_num = five_num + three_num;
	}
	else if (N % 5 == 1 && N != 1)
	{
		five_num = (N / 5) - 1;
		three_num = 2;
		total_num = five_num + three_num;
	}
	else if (N % 5 == 2 && N != 2 && N != 7)
	{
		five_num = (N / 5) - 2;
		three_num = 4;
		total_num = five_num + three_num;
	}
	else if (N % 5 == 3)
	{
		five_num = (N / 5);
		three_num = 1;
		total_num = five_num + three_num;
	}
	else if (N % 5 == 4 && N != 4)
	{
		five_num = (N / 5) - 1;
		three_num = 3;
		total_num = five_num + three_num;
	}

	printf("%d\n", total_num);

	return 0;
}