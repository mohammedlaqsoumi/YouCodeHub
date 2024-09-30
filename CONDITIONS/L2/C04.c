#include <stdio.h>

int main() {
    int sc, anc, reco;
    float bonus = 0.0;
    printf("Entrez le sc de performance (0 à 100) : ");
    scanf("%d", &sc);
    printf("Entrez l'ancienneté (en années) : ");
    scanf("%d", &anc);
    printf("Entrez le nombre de récompenses reçues (0, 1, 2 ou plus) : ");
    scanf("%d", &reco);
    if (reco == 1) {
        bonus = 0.10;
    } else if (reco >= 2) {
        bonus = 0.20;
    }
    if (sc >= 90 && anc >= 5) {
        printf("Performance : Excellente\n");
    } else if (sc >= 75 && anc >= 3) {
        printf("Performance : Bonne\n");
    } else if (sc >= 50 && anc < 3) {
        printf("Performance : Satisfaisante\n");
    } else {
        printf("Performance : Insuffisante\n");
    }

    if (bonus > 0) {
        printf("Bonus : %.0f%%\n", bonus * 100);
    } else {
        printf("Aucun bonus\n");
    }

    return 0;
}
