#include <stdio.h>

int main() {
    int Ne, i, max;
    printf("Le nombre d'elements: ");
    scanf("%d", &Ne);

    int T[Ne];
    printf("Entrez les elements du tableau:\n");
    for (i = 0; i < Ne; i++) {
        scanf("%d", &T[i]);
    }
    max = T[0];
    for (i = 1; i < Ne; i++) {
        if (T[i] < max) {
            max = T[i];
        }
    }

    printf("Le plus petit element est : %d\n", max);
    return 0;
}
