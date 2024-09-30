#include <stdio.h>
 
int main()
{
   int NbrI = 0, nbr;
 
   printf("Entrez un nombre\n");
   scanf("%d", &nbr);
 
   while (nbr != 0)
   {
      NbrI = NbrI * 10;
      NbrI = NbrI + nbr%10;
      nbr = nbr/10;
   }
 
   printf("Le nombre en sens inverse est = %d\n", NbrI);
 
   return 0;
}