#include <stdio.h>

int main(void)
{
	FILE* avaus = fopen_s("tiedosto.txt", "w");
	fprintf(avaus , "Moikka!\n");

	fclose(avaus);

	return 0;
}