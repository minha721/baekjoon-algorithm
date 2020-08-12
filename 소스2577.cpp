//숫자의 개수
#include <stdio.h>

int lengthNum(int n) {
	int len = 0;
	while (1) {
		if (n < 10) {
			len++;
			break;
		}
		else {
			n /= 10;
			len++;
		}
	}
	return len;
}

int main()
{
	int a, b, c;
	int res;
	int res_length;
	int res_num[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int cnt[10] = { 0,0,0,0,0,0,0,0,0,0 };

	scanf("%d %d %d", &a, &b, &c);
	res = a * b * c;
	res_length = lengthNum(res);

	for (int i = 0; i < res_length; i++) {
		res_num[i] = res % 10;
		res /= 10;
	}

	for (int i = 0; i < res_length; i++) {
		for (int j = 0; j < 10; j++) {
			if (res_num[i] == j)
				cnt[j]++;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", cnt[i]);

	return 0;
}