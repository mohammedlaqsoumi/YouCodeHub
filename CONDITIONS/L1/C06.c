#include <stdio.h>

int main() {
    int N;
    printf("add a number : \n");
    scanf("%d",&N);
    if (N > 0){
        printf("Le nombre est Positif");
    }
    else if (N < 0) {
        printf("Le nombre est negatif");
    }
    else {
        printf("Le nombre est egale à zero");
    }
    return 0;
}