#include<stdio.h>

int main()
{
    float taulukko[30], tyopaivanpituus = .0f, kokonaistunnit = .0f;
    int indeksi;
    int paiva;


    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\n tehdyt ty�tunnit sek� keskim��r�isen ty�p�iv�n pituuden.\n");
    printf("Kuinka monta p�iv��:");
    scanf_s("%d", &paiva);
    for (indeksi = 0; indeksi < paiva; indeksi++) {
        printf("Anna %d. p�iv�n ty�tunnit:", indeksi + 1);
        scanf_s("%f", &taulukko[indeksi]);
        kokonaistunnit += taulukko[indeksi];
        tyopaivanpituus = kokonaistunnit / paiva;


    }
    printf("Tehdyt ty�tunnit yhteens�: %.1f\nKeskim��r�inen ty�p�iv�n pituus: %.1f\nSy�tetyt tunnit:"
        , kokonaistunnit, tyopaivanpituus);
    for (indeksi = 0; indeksi < paiva; indeksi++) {
        printf("%.1f", taulukko[indeksi]);
        
    }
    return 0;
}