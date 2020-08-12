//상근날드

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sang, jung, ha;
	int coke, sprite;

	scanf("%d %d %d %d %d", &sang, &jung, &ha, &coke, &sprite);

	int burger_min = (sang <= jung ? sang : jung) <= ha ? (sang <= jung ? sang : jung) : ha;
	int juice_min = coke <= sprite ? coke : sprite;

	printf("%d", burger_min + juice_min - 50);

	return 0;
}