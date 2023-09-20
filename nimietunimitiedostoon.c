#include <stdio.h> 

int main()
{
	FILE* tiedosto;
	char tiedostonimi[8][4];
	char etunimi[15], sukunimi[20];
	printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\nSyötä etunimesi:");
	scanf("%s", etunimi);
	printf("Syötä sukunimesi:");
	scanf("%s", sukunimi);
	printf("Tiedosto johon haluat tallentaa nimesi:");
	scanf("%s", &tiedostonimi);
	tiedosto = fopen(tiedostonimi, "w");
	fprintf(tiedosto, "%s %s", etunimi, sukunimi);
	printf("\n\nTallennus onnistui!");
	return 0;
}