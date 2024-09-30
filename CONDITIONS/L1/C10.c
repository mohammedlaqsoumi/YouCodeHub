#include <stdio.h>
#include <string.h>
int main(){
  int a,j,m;
  char mm[20];
  printf("Entrer la date en cette format DD/MM/YY : \n  ");
  scanf("%d/%d/%d",&j,&m,&a);
 
  switch(m){
      case 1:{
         strcpy(mm,"janvier");
         break;
      }
      case 2:{
         strcpy(mm,"février");
         break;
      }
      case 3:{
         strcpy(mm,"mars");
         break;
      }
      case 4:{
         strcpy(mm,"avril");
         break;
      }
      case 5:{
         strcpy(mm,"mai");
         break;
      }
      case 6:{
         strcpy(mm,"juin");
         break;
      }
      case 7:{
         strcpy(mm,"juillet");
         break;
      }
      case 8:{
         strcpy(mm,"août");
         break;
      }
      case 9:{
         strcpy(mm,"september");
         break;
      }
      case 10:{
         strcpy(mm,"october");
         break;
      }
      case 11:{
         strcpy(mm,"novembre");
         break;
      }
      case 12:{
         strcpy(mm,"decembre");
         break;
      }
  }
   printf("%d-%s-%d",j,mm,a);
   return 0;
}