#include <stdio.h>
#include <math.h>
int main() {
   float a,b,c,D=0,x1=0,x2=0;
   printf("entrer a et b et c : ");
   scanf("%f%f%f",&a,&b,&c);
   D = b*b - 4*a*c;
   if (D>0){
       x1 = (-b + sqrt(D))/(2*a);
       x2 = (-b - sqrt(D))/(2*a);
       printf("2 solution pour cette equation \n S1 = %f\n S2 = %f\n", x1,x2);
   }
   else if (D==0){
       x1 = (-b / (2*a));
       printf("une solution pour cette equation \n S = %f\n", x1);
   }
   else{
       printf("pas de solutions pour cette Equation");
   }
   
   return 0;
}