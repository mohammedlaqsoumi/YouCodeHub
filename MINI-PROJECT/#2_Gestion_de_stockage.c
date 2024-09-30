#include <stdio.h>
#include <string.h>

#define MAX_LIVRES 20

int main() {
    char titre[MAX_LIVRES][30], auteur[MAX_LIVRES][30];
    double prix[MAX_LIVRES];
    int quantite[MAX_LIVRES];
    int choix, nblivre = 0, i, j, trouve, totalLivres = 0;
    char recherche[30];

    do {
        printf("\n1. Ajouter un livre\n2. Afficher tous les livres\n3. Rechercher un livre\n4. Mettre à jour la quantite\n5. Supprimer un livre\n6. Afficher total des livres\n7. Quitter\n");
        scanf("%d", &choix);
        getchar();

        if (choix == 1) {
            if (nblivre < MAX_LIVRES) {
                printf("Titre : ");
                scanf(" %[^\n]", titre[nblivre]);

                printf("Auteur : ");
                scanf(" %[^\n]", auteur[nblivre]);

                printf("Prix : ");
                scanf("%lf", &prix[nblivre]);

                printf("Quantite : ");
                scanf("%d", &quantite[nblivre]);

                nblivre++;
            } else {
                printf("Stock plein.\n");
            }
        }

        else if (choix == 2) {
            for (i = 0; i < nblivre; i++) {
                printf("%s | %s | %.2lf | %d\n", titre[i], auteur[i], prix[i], quantite[i]);
            }
        }

        else if (choix == 3) {
            printf("Titre à rechercher : ");
            scanf(" %[^\n]", recherche);

            trouve = 0;
            for (i = 0; i < nblivre; i++) {
                if (strcmp(titre[i], recherche) == 0) {
                    printf("Trouvé : %s | %s | %.2lf | %d\n", titre[i], auteur[i], prix[i], quantite[i]);
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Livre non trouvé.\n");
            }
        }

        else if (choix == 4) {
            printf("Titre du livre à modifier : ");
            scanf(" %[^\n]", recherche);

            trouve = 0;
            for (i = 0; i < nblivre; i++) {
                if (strcmp(titre[i], recherche) == 0) {
                    printf("Nouvelle quantité : ");
                    scanf("%d", &quantite[i]);
                    trouve = 1;
                    break;
                }
            }
            if (!trouve) {
                printf("Livre non trouvé.\n");
            }
        }

        else if (choix == 5) {
            printf("Titre du livre à supprimer : ");
            scanf(" %[^\n]", recherche);

            trouve = 0;
            for (i = 0; i < nblivre; i++) {
                if (strcmp(titre[i], recherche) == 0) {
                    for (j = i; j < nblivre - 1; j++) {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                    }
                    nblivre--;
                    trouve = 1;
                    printf("Livre supprimé.\n");
                    break;
                }
            }
            if (!trouve) {
                printf("Livre non trouvé.\n");
            }
        }

        else if (choix == 6) {
            totalLivres = 0;
            for (i = 0; i < nblivre; i++) {
                totalLivres += quantite[i];
            }
            printf("Total des livres en stock : %d\n", totalLivres);
        }

        else if (choix == 7) {
            printf("Au revoir!\n");
        }

        else {
            printf("Choix invalide.\n");
        }

    } while (choix != 7);

    return 0;
}
