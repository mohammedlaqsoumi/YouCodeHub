#include <stdio.h>

int main() {
    char N;
    printf("add a lettre : \n");
    scanf("%c",&N);
    if (N >= 65 && N <= 90){
        printf("%c est majuscul car le ASCII est %d",N,N);
    }else{
      printf("%c est minuscul car le ASCII est %d",N,N);  
    }
    return 0;
}