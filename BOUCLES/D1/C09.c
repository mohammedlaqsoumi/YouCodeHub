#include <stdio.h>
int main()
{ 
	int n, nb, c = 0;
	printf("Entrer un nombre: ");
	scanf("%d", &n);
	nb = n;
	do{
		n = n / 10;
		c++;
	}while(n != 0);
	printf("Le nombre de chiffres du nombre %d est %d\n",nb,  c);
	
}