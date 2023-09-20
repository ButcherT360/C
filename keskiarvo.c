#include <stdio.h>  

int main()
{
	float syotetty_luku, keskiarvo = 0;
	int kierros = 0;
	printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\nLopetus negatiivisella kokonaisluvulla.\n");
	do {
		printf("Anna arvosana (4-10):");
		scanf_s("%f", &syotetty_luku);

		
		
		if (syotetty_luku > 0) {
			keskiarvo = keskiarvo + syotetty_luku;
			kierros++;
		}
		else if (syotetty_luku < 0) {
			keskiarvo = keskiarvo / kierros;
			printf("Ohjelmaan syötetty %d arvosanaa.\nArvosanojen keskiarvo: %.2f",kierros, keskiarvo);
		}
	} while (syotetty_luku > 0);

	return 0;
}
