//À½°è
#include <stdio.h>
#define MELODYNUMBER 8

int main()
{
	int melody[MELODYNUMBER];
	int cnt_as = 0;
	int cnt_des = 0;

	for (int i = 0; i < MELODYNUMBER; i++)
		scanf("%d", &melody[i]);

	for (int i = 0; i < MELODYNUMBER - 1; i++) {
		if (melody[i] < melody[i + 1])
			cnt_as++;
	}

	for (int i = 0; i < MELODYNUMBER - 1; i++) {
		if (melody[i] > melody[i + 1])
			cnt_des++;
	}

	if (cnt_as == MELODYNUMBER - 1 && cnt_des < MELODYNUMBER - 1)
		printf("ascending\n");
	else if (cnt_as < MELODYNUMBER - 1 && cnt_des == MELODYNUMBER - 1)
		printf("descending\n");
	else
		printf("mixed\n");
}