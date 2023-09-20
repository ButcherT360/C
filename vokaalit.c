#include <stdio.h> 

int main(void)
{
	int luku = 0;
	int hit = 0;
	char sana[15];
	printf("Ohjelma laskee vokaalien m‰‰ri‰.");
	printf("\nAnna sana:");
	scanf("%s", &sana);
	while (sana[hit] != 0) {
		if (sana[hit] == 'a' || sana[hit] == 'e' || sana[hit] == 'i' || sana[hit] == 'o' || sana[hit] == 'u' || sana[hit] == 'y') {
			luku++;
		}
		hit++;
	}
	printf("\nSanassa vokaaleja:%i", luku);
	return 0;
}