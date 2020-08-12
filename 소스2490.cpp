//À·³îÀÌ
#include <stdio.h>

int main()
{
	int yut[3][4];
	int num_belly[3] = { 0, 0, 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			scanf("%d", &yut[i][j]);
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (yut[i][j] == 0)
				num_belly[i]++;
		}
	}

	for (int i = 0; i < 3; i++) {
		if (num_belly[i] == 1)
			printf("A\n");
		else if (num_belly[i] == 2)
			printf("B\n");
		else if (num_belly[i] == 3)
			printf("C\n");
		else if (num_belly[i] == 4)
			printf("D\n");
		else if (num_belly[i] == 0)
			printf("E\n");
	}

}