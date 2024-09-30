#include <stdio.h>
#include <math.h>
int main()
{
  int nb,i=0,a,c=1;
 
  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nb);
  printf("Entrez LA PUISSANCE \n");
  scanf("%d", &a);
  for (i ;i<a; i++){
     c*=nb; 
   
  }
    printf("%d ",c);
 
 
  return 0;
}
