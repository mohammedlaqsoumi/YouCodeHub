#include <stdio.h>

int main() {
    int N;
    printf("tapez votre note : \n");
    scanf("%d",&N);
    if (N>=0 && N<=20){
        if (N>= 16){
            printf("la moyenne est Tres bien");
        }
        else if (N >= 14 && N <= 16){
            printf("la moyenne est bien");
        }
        else if (N >= 14 && N <= 16){
            printf("la moyenne est bien");
        }
        else if (N >= 12 && N <= 14){
            printf("la moyenne est bien");
        }
        else if (N >= 10 && N <= 12){
            printf("la moyenne est bien");
        }
        else {
            printf("il est recalé");
        }
    
    }
    else{
        printf("saiser une note de 0 à 20");
    }
    return 0;
}