#include <stdio.h>
int main() {
   int N;
   printf("entrer un nombre : ");
   scanf("%d",&N);
   if (N % 2 == 0){
       printf("le nombre est Paire");
   }
   else {
       printf("le nombre est Imaire");
   }
   return 0;
}