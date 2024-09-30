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
        printf("%d\t", tableau[i]);
    }
    return 0;
}