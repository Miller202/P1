#include <stdio.h>
#include <string.h>

void imprimirArray(int i, int array[])
{
	if (i >= 0)
	{
		printf("%d", array[i]);
		imprimirArray(i-1, array);
	}
}

int numerosGrandes(int i, int j, char n1[], char n2[], int tam1, int tam2, int soma[])
{
	if (tam1 >= 0)
	{
		int aux1, aux2;

		aux1 = n1[tam1] - '0';

		if (tam2 >= 0)
		{
		    aux2 = n2[tam2] - '0';
		}
		else{
			aux2 = 0;
		}

		int aux_soma = j + aux1 + aux2;
		soma[i] = (aux_soma % 10);

		return numerosGrandes(i+1, aux_soma/10, n1, n2, tam1-1, tam2-1, soma);

	}
	else if (j > 0)
	{
		soma[i] = j;
		i+=1;
	}
	return i;
}

int main ()
{
	int soma[999];

	char n1[999], n2[999];

	int n, tam1, tam2;

	scanf("%s %s", n1, n2);

	tam1 = (strlen(n1)-1);
	tam2 = (strlen(n2)-1);

	if (tam1 > tam2)
	{
	    n = numerosGrandes(0, 0, n1, n2, tam1, tam2, soma);
	}
	else{
	    n = numerosGrandes(0, 0, n2, n1, tam2, tam1, soma);
	}

	imprimirArray(n-1, soma);

	return 0;
}
