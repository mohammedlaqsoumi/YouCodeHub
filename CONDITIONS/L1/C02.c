#include <stdio.h>
int main() {
   char T;
   printf("entrer un caractere : ");
   scanf("%c",&T);
   switch(T){
       case 'a' :
       case 'y' :
       case 'e' :
       case 'u' :
       case 'i' :
       case 'o' :
       printf("%c Est voyelle", T);
       break;
       default : printf("%c Est non voyelle", T);
   }
   return 0;
}