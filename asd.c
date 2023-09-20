#include <stdio.h>

int main()
{
	int luku;
	int luku2;

	printf("Anna eka luku:");
	scanf("%d", &luku);
	printf("Anna toka luku:");
	scanf("%d", &luku2);
	int luku3;
	luku3 = luku + luku2;
	int luku4;
	luku4 = luku - luku2;
	int luku5;
	luku5 = luku * luku2;
	printf(luku "+" luku2 "=" luku3);
	printf(luku "-" luku2 "=" luku4);
	printf(luku "*" luku2 "=" luku5);
	return 0;
}