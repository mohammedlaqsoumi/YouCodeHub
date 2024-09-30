#include <stdio.h>
#include <math.h>

int main() {
    int Ne, i, S = 0;
    printf("Le nombre d'éléments: ");
    scanf("%d", &Ne);

    int T[Ne];
    for (i = 0; i < Ne; i++) {
        printf("Le nombre d'éléments %d: ", i + 1);
        scanf("%d", &T[i]);
        S += T[i];
    }

    printf("La somme totale est : %d\n", S);
    return 0;
}




// #include <stdio.h>

// int main() {
    // int i,Ne,s=0;
    // printf("combien d'element ?\n");
    // scanf("%d",&Ne);
    // int tableau[Ne];
    // for(i=0; i<Ne; i++){
        // printf("l'element %d \n",i+1);
        // scanf("%d",&tableau[i]);
    // }
    // printf("les element dans le tableau sont : \n");
    // for(i=0; i<Ne; i++){
        // s +=tableau[i];
    // }
    // printf("%d ", s);
    // return 0;
// }