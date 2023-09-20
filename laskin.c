#include <stdio.h>
int main()
{
	int numero;
	int luku;
	int luku2;
	printf("1: vähennyslasku \n 2: yhteenlasku \n 3: kertolasku \n Valitse toiminto:");
	scanf_s("%d", &numero);

	switch (numero) {
	case 1:
	{
		printf("Anna eka luku:\n");
		scanf_s("%d", &luku);
		printf("Anna toka luku:\n");
		scanf_s("%d", &luku2);
		int lukumaara = luku - luku2;
		printf("%d-%d=%d\n", luku, luku2, lukumaara);
		break;
	}
	case 2:
	{
		printf("Anna eka luku:\n");
		scanf_s("%d", &luku);
		printf("Anna toka luku:\n");
		scanf_s("%d", &luku2);
		int lukumaara = luku + luku2;
		printf("%d+%d=%d\n", luku, luku2, lukumaara);
		break;
	}
	case 3:
	{
		printf("Anna eka luku:\n");
		scanf_s("%d", &luku);
		printf("Anna toka luku:\n");
		scanf_s("%d", &luku2);
		int lukumaara = luku * luku2;
		printf("%d*%d=%d\n", luku, luku2, lukumaara);
		break;
	}
	default:
		printf("Antamasi syöte on arvoalueen ulkopuolella.\n");
		break;
	}

	return 0;
}
