#include <stdio.h>

int main() {
    int r;
    int sc;
    int dp;

    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%d", &r);
    printf("Entrez le score de crédit (sur 1000) : ");
    scanf("%d", &sc);
    printf("Entrez la durée du prêt (en années) : ");
    scanf("%d", &dp);
    if (r >= 30000 && sc >= 700 && dp <= 10) {
        printf("Éligible\n");
        } 
        else if (r >= 30000 && sc >= 650 && dp <= 15) {
            printf("Éligible avec conditions\n");
            } 
            else {
                printf("Non éligible\n");
                }
    return 0;
}