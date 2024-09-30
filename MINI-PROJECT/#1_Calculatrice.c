#include <stdio.h>
#include <math.h>

int main() {
    int choix, n, i;
    float N1, N2, S, sum, moy;

    char menu[300] = "1: Addition\n2: Soustraction\n3: Multiplication\n4: Division\n5: Moyene\n6: Valeur absolue\n7: Exponentiation\n8: Racine carrée\n9: Quitter le programme\n\n";

    do {
        printf("%s", menu);
        printf("ENTRER VOTRE CHOIX\n");
        scanf("%d", &choix);

        switch(choix) {
            case 1:
                printf("Combien de nombres voulez-vous additionner ?\n");
                scanf("%d", &n);
                sum = 0;
                for (i = 0; i < n; i++) {
                    printf("Entrer un nombre : ");
                    scanf("%.2f", &N1);
                    sum += N1;
                }
                printf("Résultat = %.2f\n\n", sum);
                break;

            case 2:
                printf("Combien de nombres voulez-vous soustraire ?\n");
                scanf("%d", &n);
                printf("Entrer le 1er nombre : ");
                scanf("%.2f", &N1);
                sum = N1;
                for (i = 1; i < n; i++) {
                    printf("Entrer le nombre suivant : ");
                    scanf("%.2f", &N2);
                    sum -= N2;
                }
                printf("Résultat = %.2f\n\n", sum);
                break;

            case 3:
                printf("Entrer le 1er Nombre\n");
                scanf("%.2f", &N1);
                printf("Entrer le 2eme Nombre\n");
                scanf("%.2f", &N2);
                S = N1 * N2;
                printf("Résultat = %.2f\n\n", S);
                break;

            case 4:
                printf("Entrer le 1er Nombre\n");
                scanf("%.2f", &N1);
                printf("Entrer le 2eme Nombre\n");
                scanf("%.2f", &N2);
                if (N2 != 0) {
                    S = N1 / N2;
                    printf("Résultat = %.2f\n\n", S);
                } else {
                    printf("Erreur : Division par zéro impossible !\n\n");
                }
                break;

            case 5:
                printf("Combien de nombres voulez-vous entrer pour la Moyene ?\n");
                scanf("%d", &n);
                sum = 0;
                for (i = 0; i < n; i++) {
                    printf("Entrer un nombre : ");
                    scanf("%.2f", &N1);
                    sum += N1;
                }
                moy = sum / n;
                printf("moy = %.2f\n\n", moy);
                break;

            case 6:
                printf("Entrer un nombre : ");
                scanf("%.2f", &N1);
                printf("Valeur absolue = %.2f\n\n", fabs(N1));
                break;

            case 7:
                printf("Entrer la base : ");
                scanf("%.2f", &N1);
                printf("Entrer l'exposant : ");
                scanf("%.2f", &N2);
                S = pow(N1, N2);
                printf("Résultat = %.2f\n\n", S);
                break;

            case 8:
                printf("Entrer un nombre : ");
                scanf("%.2f", &N1);
                if (N1 >= 0) {
                    S = sqrt(N1);
                    printf("Racine carrée = %.2f\n\n", S);
                } else {
                    printf("Erreur : Racine carrée d'un nombre négatif impossible !\n\n");
                }
                break;

            case 9:
                printf("Quitter\n");
                break;

            default:
                printf("Choix invalide, réessayez.\n\n");
        }
    } while (choix != 9);

    return 0;
}