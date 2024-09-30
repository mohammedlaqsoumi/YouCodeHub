#include <stdio.h>

int main() {
    int Ne, i, j, temp;
    printf("Le nombre d'éléments: ");
    scanf("%d", &Ne);

    int T[Ne];
    printf("Entrez les éléments du tableau:\n");
    for (i = 0; i < Ne; i++) {
        scanf("%d", &T[i]);
    }

    for (i = 0; i < Ne - 1; i++) {
        for (j = 0; j < Ne - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

    printf("Le tableau trié en ordre croissant est :\n");
    for (i = 0; i < Ne; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
