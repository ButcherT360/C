#include<stdio.h>

int main()
{
    float taulukko[30], tyopaivanpituus = .0f, kokonaistunnit = .0f;
    int indeksi;
    int paiva;


    printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\n tehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n");
    printf("Kuinka monta päivää:");
    scanf_s("%d", &paiva);
    for (indeksi = 0; indeksi < paiva; indeksi++) {
        printf("Anna %d. päivän työtunnit:", indeksi + 1);
        scanf_s("%f", &taulukko[indeksi]);
        kokonaistunnit += taulukko[indeksi];
        tyopaivanpituus = kokonaistunnit / paiva;


    }
    printf("Tehdyt työtunnit yhteensä: %.1f\nKeskimääräinen työpäivän pituus: %.1f\nSyötetyt tunnit:"
        , kokonaistunnit, tyopaivanpituus);
    for (indeksi = 0; indeksi < paiva; indeksi++) {
        printf("%.1f", taulukko[indeksi]);
        
    }
    return 0;
}