#include <stdio.h>

int main() {
    int bd, des, pers;

    printf("Entrez le bd (en euros) : ");
    scanf("%d", &bd);
    printf("Choisissez la des (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &des);
    printf("Entrez le nombre de pers : ");
    scanf("%d", &pers);

    if (bd >= 1000) {
        printf("Recommandation : Voyage haut de gamme\n");
    } else if (bd >= 500) {
        printf("Recommandation : Voyage moyen\n");
    } else {
        printf("Recommandation : Voyage économique\n");
    }

    if (des == 1 && bd >= 1000 && pers > 2) {
        printf("des recommandée : Plage\n");
    } else if (des == 2 && bd >= 500 && pers <= 2) {
        printf("des recommandée : Montagne\n");
    } else if (des == 3) {
        printf("des recommandée : Ville\n");
    } else {
        printf("des recommandée : Aucune\n");
    }

    return 0;
}
