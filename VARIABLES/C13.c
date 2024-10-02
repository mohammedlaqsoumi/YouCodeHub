#include <stdio.h>
int main() {
   int N,k;
   int Bin[32];
   int i=0;
   printf("entrer le nombre : ");
   scanf("%d",&N);
   k=N;
   for ( ;N > 0; ){
      Bin[i++] = N % 2;
      N /= 2;
   }
   
   for (int j = i-1; j >= 0; j--){
    printf("%d", Bin[j]);
   }
   printf("\n%X",k);
   return 0;
}