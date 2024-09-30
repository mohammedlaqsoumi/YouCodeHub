#include <stdio.h>

int main() {
    float bs, oth, otp, bon, ts;
    int jt;

    printf("Entrez le salaire de base (en euros) : ");
    scanf("%f", &bs);
    printf("Entrez le nombre d'heures supplémentaires : ");
    scanf("%f", &oth);
    printf("Entrez le type de poste (1 pour junior, 2 pour senior) : ");
    scanf("%d", &jt);

    otp = oth * (bs / 40) * 1.5;

    if (jt == 1) {
        bon = bs * 0.10;
    } else if (jt == 2) {
        bon = bs * 0.20;
    }

    ts = bs + otp + bon;

    printf("Le salaire total est : %.2f euros\n", ts);

    return 0;
}
