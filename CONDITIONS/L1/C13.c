#include <stdio.h>

int main() {
    int x1, y1, x2, y2, px, py;
    printf("Entrez les coordonnées du premier point du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);
    printf("Entrez les coordonnées du deuxième point du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);
    printf("Entrez les coordonnées du point (px py) : ");
    scanf("%d %d", &px, &py);
    if ((px >= x1 && px <= x2 || px >= x2 && px <= x1) && 
        (py >= y1 && py <= y2 || py >= y2 && py <= y1)) {
        printf("Le point (%d, %d) est sur le segment.\n", px, py);
    } else {
        printf("Le point (%d, %d) n'est pas sur le segment.\n", px, py);
    }

    return 0;
}
