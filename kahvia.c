#include <stdio.h>

int main()
{
	char kahvi;

	printf("Juotko kahvia vai teetä (k/t)?");
	kahvi = getchar();
	if (kahvi == 'k' || kahvi == 'K') {
		int lukumaara;
		printf("Montako kuppia juot päivässä: ");
		scanf_s("%d", &lukumaara);
		if (lukumaara <= 2)
			printf("Et taida juoda paljoa kahvia.\n");
		else if (lukumaara <= 20)
			printf("Juotpa paljon kahvia!\n");
		else
			printf("Ohjelmassa on tapahtunut virhe!\n");
	}
	else if (kahvi == 't' || kahvi == 'T') {
		int lukumaara;
		printf("Montako kuppia juot päivässä: ");
		scanf_s("%d", &lukumaara);
		if (lukumaara <= 2) {
			printf("Et taida juoda paljon teetä.\n");
		}
		else if (lukumaara <= 20)
			printf("Juotpa paljon teetä!\n");
		else
			printf("Ohjelmassa on tapahtunut virhe!\n");
	}
	else if (kahvi == kahvi) {
		int lukumaara;
		printf("Montako kuppia juot päivässä: ");
		scanf_s("%d", &lukumaara);
		printf("Ohjelmassa on tapahtunut virhe!\n");
		return 0;
	}

}