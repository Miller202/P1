#include <stdio.h>
#include <string.h>

int palavras(int i, char nome[])
{
	if (nome[i] != '\0')
	{
		if(nome[i] == ' ')
        {
            return 1 + palavras(i+1, nome);
        }
        else{
            return palavras(i+1, nome);
        }
	}
	else{
	    return 1;
	}
}

void comprandoFrutas(int i, int n, int frutas, double valor)
{
	if (i < n)
	{
	    char nome[999];
	    double valor2;

		scanf("%lf", &valor2);
		getchar();
		scanf("%[^\n]s", nome);

		int quant = palavras(0, nome);
		frutas += quant;
		valor += valor2;
		printf("dia %d: %d kg\n", i+1, quant);

		comprandoFrutas(i+1, n, frutas, valor);
	}
	else{
		double consumo, gasto;

		consumo = ((double) frutas)/n;
		gasto = ((double) valor)/n;
		printf("%.2lf kg por dia\n", consumo);
		printf("R$ %.2lf por dia", gasto);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	comprandoFrutas(0, n, 0, 0);
	return 0;
}
