#include <stdio.h>

int summa(void);
int erotus(void);
int tulo(void);

int main(void)
{
    int valinta;
    do {

        printf("1:kahden luvun summa\n2:kahden luvun erotus\n3:kahden luvun tulo\n");
        printf("<0: ohjelman lopetus\n");
        printf("Valitse laskutoimitus:");
        scanf_s("%d", &valinta);
        if (valinta < 0) {
            printf("Ohjelma lopetetaan...");
        }
        else if (valinta == 1) {
            summa();
        }
        else if (valinta == 2) {
            erotus();
        }
        else if (valinta == 3) {
            tulo();
        }
        else {
            printf("Antamasi luku ei kelpaa.\n\n");
        }
    } while (valinta > 0);
    return 0;
}
    int summa(void) {
    int luku1, luku2;
    
    printf("Sy�t� ensimm�inen luku:\n");
    scanf_s("%d", &luku1);
    printf("Sy�t� toinen luku:\n");
    scanf_s("%d", &luku2);
    int tulos = luku1 + luku2;
    printf("%d + %d = %d\n", luku1,luku2,tulos);
    return 0;
}
    int erotus(void) {
        int luku1, luku2;

        printf("Sy�t� ensimm�inen luku:\n");
        scanf_s("%d", &luku1);
        printf("Sy�t� toinen luku:\n");
        scanf_s("%d", &luku2);
        int tulos = luku1 - luku2;
        printf("%d - %d = %d\n", luku1, luku2, tulos);
        return 0;
    }
    int tulo(void) {
        int luku1, luku2;

        printf("Sy�t� ensimm�inen luku:\n");
        scanf_s("%d", &luku1);
        printf("Sy�t� toinen luku:\n");
        scanf_s("%d", &luku2);
        int tulos = luku1 * luku2;
        printf("%d * %d = %d\n", luku1, luku2, tulos);
        return 0;
    }