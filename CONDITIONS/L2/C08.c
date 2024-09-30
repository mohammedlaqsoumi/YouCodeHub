#include <stdio.h>

int main() {
    int age, medicalHistory, coverageType;
    printf("Entrez l'âge : ");
    scanf("%d", &age);
    printf("Entrez l'historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &medicalHistory);
    printf("Entrez le type de couverture (1 pour de base, 2 pour étendue) : ");
    scanf("%d", &coverageType);
    if (age < 30) {
        printf("Plan de santé : Plan de base\n");
    } else if (age >= 30 && medicalHistory == 0) {
        printf("Plan de santé : Plan de base\n");
    } else if (age >= 30 && medicalHistory >= 1) {
        printf("Plan de santé : Plan étendu\n");
        if (medicalHistory == 2) {
            printf("Couverture supplémentaire pour les problèmes majeurs ajoutée.\n");
        }
    }

    return 0;
}
