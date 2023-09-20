#include <stdio.h>

int suurin(int,int,int);
int pienin(int,int,int);

int main(void)
{
    int luku1, luku2, luku3;
    int valinta = 0;
    do {

        printf("Anna 1. luku:");
        scanf_s("%d", &luku1);
        printf("Anna 2. luku:");
        scanf_s("%d", &luku2);
        printf("Anna 3. luku:");
        scanf_s("%d", &luku3);
        pienin(luku1, luku2, luku3);
        suurin(luku1,luku2,luku3);

    } while (valinta > 0);
    return 0;
}
    int suurin(int luku1,int luku2,int luku3) {
        if (luku1 > luku2 && luku1 > luku3) {
            printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", luku1, luku3 );
        }
        else if (luku2 > luku3) {
            printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", luku2, luku3 );
        }
    
    return 0;
}
    int pienin(int luku1, int luku2, int luku3) {
        if (luku1 < luku2 && luku1 < luku3) {
            printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", luku3, luku1);
        }
        else if (luku2 < luku3) {
            printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.", luku3, luku2);
        }

        return 0;
    }