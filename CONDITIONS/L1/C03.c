#include <stdio.h>
int main() {
   int N1,N2;
   printf("entrer N1 et N2 : ");
   scanf("%d%d",&N1,&N2);
   if (N1 == N2){
       printf("la somme de N1 et N2 est %d",(N1+N2)*3);
   }
   else {
       printf("la somme de N1 et N2 est %d",N1+N2);
   }
   return 0;
}