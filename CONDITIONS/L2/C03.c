#include <stdio.h>

int main() {
    int ja;
    int ju;
    int se;
    int jr;
    printf("Entrez le nombre total de jours de congés accordés : ");
    scanf("%d", &ja);
    printf("Entrez le nombre de jours de congés utilisés : ");
    scanf("%d", &ju);
    printf("Entrez le statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &se);
    if (se == 1) {
        jr = ja - ju;
        }
    else if (se == 0) {
        jr = (ja / 2) - ju;
        }
    if (ju > ja) {
        printf("Alerte : Les jours utilisés dépassent les jours accordés !\n");
    }
    else {
        printf("Les jours de congé restants sont : %d\n", jr);
        }
    return 0;
}