#include<stdio.h>

int main()
{
    int matriisi[5][5] =
    {
    4, 6, 25, 88, 5,
    34, 5, 300, 4, 65,
    78, 43, 11, 90, 125,
    98, 585, 12, 63, 21,
    45, 35, 9, 5, 1
    };

    int summa = 0;
    int x, y;
    printf("Taulukon:\n");
    for (x = 0; x < 5; x++) {
        for (y = 0; y < 5; y++){
            printf("%d ", matriisi[x][y]);

            summa = summa + matriisi[x][y];
            
        }
        printf("\n");
    }
    printf("alkioiden summa on %d", summa);
    return 0;
}