#include <stdio.h>

int main() {
    int conso, tyu, tyc;
    float tar, fac;

    printf("Entrez la conso d'électricité (en kWh) : ");
    scanf("%d", &conso);
    printf("Entrez le type d'utilisateur (1 pour résidentiel, 2 pour commercial) : ");
    scanf("%d", &tyu);
    printf("Entrez le type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &tyc);

    if (tyu == 1) {
        if (tyc == 0) {
            tar = 0.20;
        } else {
            tar = 0.15;
        }
    } else if (tyu == 2) {
        if (tyc == 0) {
            tar = 0.30;
        } else {
            tar = 0.25;
        }
    }

    fac = conso * tar;

    if (conso > 500) {
        fac *= 1.10;
    }

    printf("La fac d'électricité est : %.2f €\n", fac);

    return 0;
}
