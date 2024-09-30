#include <stdio.h>

int main() {
    int rev, stf, ded;
    float impots;

    printf("Entrez le rev annuel (en euros) : ");
    scanf("%d", &rev);
    printf("Entrez le statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) : ");
    scanf("%d", &stf);

    if (stf == 1) {
        ded = 1000;
    } else if (stf == 2) {
        ded = 2000;
    } else if (stf == 3) {
        ded = 3000;
    }

    rev -= ded;

    if (rev <= 20000) {
        impots = rev * 0.05;
    } else if (rev <= 50000) {
        impots = rev * 0.10;
    } else {
        impots = rev * 0.20;
    }

    printf("Les impôts à payer sont : %.2f €\n", impots);

    return 0;
}
