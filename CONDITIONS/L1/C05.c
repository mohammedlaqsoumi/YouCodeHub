#include <stdio.h>

int main() {
    int choix;
    int annee;
    int resultat;
    int joursDansAnnee = 365;
    printf("Entrez une année (ex : 2024) : ");
    scanf("%d", &annee);

    if (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0)) {
        joursDansAnnee = 366;
    }

    printf("Que voulez-vous convertir cette année en?\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Entrez votre choix (1-5) : ");
    scanf("%d", &choix);
    if (choix == 1) {
        resultat = 12; 
        printf("%d année est égal à %d mois\n", annee, resultat);
    } else if (choix == 2) {
        resultat = joursDansAnnee; 
        printf("%d année est égal à %d jours\n", annee, resultat);
    } else if (choix == 3) {
        resultat = joursDansAnnee * 24; 
        printf("%d année est égal à %d heures\n", annee, resultat);
    } else if (choix == 4) {
        resultat = joursDansAnnee * 24 * 60; 
        printf("%d année est égal à %d minutes\n", annee, resultat);
    } else if (choix == 5) {
        resultat = joursDansAnnee * 24 * 60 * 60; 
		printf("%d année est égal à %d secondes\n", annee, resultat);
    } else {
        printf("Choix invalide. Veuillez entrer un nombre entre 1 et 5.\n");
    }

    return 0;
}