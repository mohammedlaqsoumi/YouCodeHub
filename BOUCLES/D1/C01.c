#include <stdio.h>
int main() {
   int N, i;
   printf("tapez un nombre : ");
   scanf("%d",&N);
   printf("la table de multiplication de %d : \n", N);
   for(i=1; i<=10; ++i)
    {
        printf(" %d * %d = %d \n", N, i, N*i);
    }
    
   return 0;
   
}