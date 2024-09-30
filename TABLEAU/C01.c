#include <stdio.h>

int main() {
    int i,Ne;
    printf("combien d'element ?\n");
    scanf("%d",&Ne);
    int tableau[Ne];
    for(i=0; i<Ne; i++){
        printf("l'element %d \n",i+1);
        scanf("%d",&tableau[i]);
    }
    printf("les element dans le tableau sont : \n");
    for(i=0; i<Ne; i++){
        printf("%d\n", tableau[i]);
    }
    return 0;
}  

// another way
// #include <stdio.h>

// int main() {
    // int tableau[] = {1, 2, 3, 4, 5, 3, 2, 1, 6, 7, 8, 9, 10, 2};
    // for(int i = 0 ; i < (sizeof(tableau) / sizeof(tableau[0])); i++){
        // printf("%d\n",tableau[i]);
    // }
    // return 0;
// }