//Fibonacci's Sequence//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, atual, ultimo, antepenultimo;
	printf("Digite a quantidade de termos da série\n\n");
	scanf("%d",&n);
	    if (n<=1) //Eliminating some values of N
	    {
	    printf("0\n");
	    }
	    if (n<=2) //Eliminating some values of N
	    {
	    printf("1\n");
	    }
	ultimo = 1;
	antepenultimo = 0;
	atual = 2;
		for(i=0 ; i<=n-2; i=i++){		{
		printf("O termo atual:%d\n",atual);
		antepenultimo=ultimo;
		ultimo=atual;
		atual=antepenultimo+ultimo;
		}
}
