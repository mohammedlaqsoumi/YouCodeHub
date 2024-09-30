#include <stdio.h>
 
int main()
{
  int nbr, i, f = 0;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);
 
  for (i = 1; i <= nbr; i++)
    f = f + i;
 
  printf("la somme de les premiers nombres de %d = %d\n", nbr, f);
 
  return 0;
}
