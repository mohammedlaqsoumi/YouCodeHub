#include <stdio.h>

int main() {
    int age;
    int tv;
    int na;
    float pb = 500.0;
    float prime;
    printf("Entrez l'année ex(2000) : ");
    scanf("%d", &age);
    printf("Entrez le type de voiture \n1-sportive\n2-utilitaire\n3-familiale\n ");
    scanf("%d", &tv);
    printf("Entrez le nombre d'accidents :");
    scanf("%d", &na);
    if (age < 25) {
    prime = pb * 1.5;
    }
    else if (age <= 65) {
    prime = pb;
    }
    else {
        prime = pb * 1.2;
        }
    if (tv == 1) {
        prime *= 2;
    }
    else if (tv == 2) {
        prime *= 1.2;
    }
    else if (tv == 3) {
        prime *= 1.1;
        }
    if (na > 1) {
        prime *= 1.3;
        }
    printf("La prime d'assurance est : %.2f euros\n", prime);
    return 0;
}