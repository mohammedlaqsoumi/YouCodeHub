#include <stdio.h>

int main() {
    int Ne, i, F, s = 0;
    printf("Le nombre d'elements: ");
    scanf("%d", &Ne);
    printf("Le facteur de multiplication: ");
    scanf("%d", &F);
    int T[Ne];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < Ne; i++) {
        scanf("%d", &T[i]);
    }
    for (i = 0; i < Ne; i++) {
        s = T[i] * F;
        printf("%d * %d = %d\n",T[i],F,s);
        }
    return 0;
}
