#include <stdio.h> 

int main()
{
	FILE* tiedosto; fopen("luettelo.txt", "r");
	struct henkilo {
		char etunimi[20];
		char sukunimi[20];
		char puh[20];
	} h1 = { "Etunimi", "Sukunimi", "050 - 3500980" }, h2 = { "Matti","Meikäläinen", "041 - 3478924" },
		h3 = { "Brian", "Kottarainen", "040 - 3980982" }, h4 = { "Brita", "Kottarainen", "05 - 4567393" };
	tiedosto = fopen("luettelo.txt", "w");
	fprintf(tiedosto, "%s %s %s", h1.etunimi, h1.sukunimi, h1.puh);
	fprintf(tiedosto, "%s %s %s", h2.etunimi, h2.sukunimi, h2.puh);
	fprintf(tiedosto, "%s %s %s", h3.etunimi, h3.sukunimi, h3.puh);
	fprintf(tiedosto, "%s %s %s", h4.etunimi, h4.sukunimi, h4.puh);

	tiedosto = fopen("luettelo.txt", "r");
	printf("%s %s %s\n", h1.etunimi, h1.sukunimi, h1.puh);
	printf("%s %s %s\n", h2.etunimi, h2.sukunimi, h2.puh);
	printf("%s %s %s\n", h3.etunimi, h3.sukunimi, h3.puh);
	printf("%s %s %s", h4.etunimi, h4.sukunimi, h4.puh);
	return 0;
}