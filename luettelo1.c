#include <stdio.h> 

int main()
{
	int i;
	FILE* tiedosto = fopen("luettelot.txt", "r";
	char luettelo[] = "luettelo.txt";
	struct henkilo {
		char etunimi[20];
		char sukunimi[20];
		char puh[20];
	};
	struct henkilo henkilo_lista[5];
	for (i = 0; i < 5; i++) {
		printf(tiedosto, luettelo, "%s %s %s\n", henkilo_lista[i].etunimi, henkilo_lista[i].sukunimi, henkilo_lista[i].puh);
	}
	return 0;
}