#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jour;
    srand(time(NULL));
    jour = rand() % 7;
    if (jour == 0) {
        printf("Dimanche\n");
    } else if (jour == 1) {
        printf("Lundi\n");
    } else if (jour == 2) {
        printf("Mardi\n");
    } else if (jour == 3) {
        printf("Mercredi\n");
    } else if (jour == 4) {
        printf("Jeudi\n");
    } else if (jour == 5) {
        printf("Vendredi\n");
    } else {
        printf("Samedi\n");
    }

    return 0;
}