#include <stdio.h>

int main() {
    int age, yoc;
    float ts, bon = 0;

    printf("Entrez l'âge : ");
    scanf("%d", &age);
    printf("Entrez les années de cotisation : ");
    scanf("%d", &yoc);
    printf("Entrez le montant total épargné (en euros) : ");
    scanf("%f", &ts);

    if (ts > 50000) {
        bon = ((int)(ts - 50000) / 10000) * (ts * 0.05);
    }

    if (age >= 65 && yoc >= 30 && ts >= 100000) {
        printf("Plan de retraite : Plan complet avec pension élevée\n");
    } else if (age >= 65 && yoc >= 20 && ts >= 50000) {
        printf("Plan de retraite : Plan partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan de retraite : Plan épargne non encore disponible\n");
    }

    if (bon > 0) {
        printf("bon ajouté : %.2f euros\n", bon);
    }

    return 0;
}
