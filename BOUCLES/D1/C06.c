#include <stdio.h>
 
int main()
{
  int nbr, i, f = 2;
 
  printf("Entrez un nombre :\n");
  scanf("%d", &nbr);
  printf("%d ", f);
  for (i = 1; i <nbr; i++){
      f = f + 2;
      printf("%d ", f);
  }
    
 
 
  return 0;
}
