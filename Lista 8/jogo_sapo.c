#include <stdio.h>

void imprimirJogadores(int i, int n, int jogador[])
{
	if (i < n)
	{
		printf("%d\n", jogador[i]);
		imprimirJogadores(i+1, n, jogador);
	}
}

int decomporTabuleiro(int casa, int n)
{
    if(n > casa)
    {
        return casa;
    }
    else{
        return decomporTabuleiro(casa-n, n);
    }
}

void rodadaSapo(int i, int n, int m, int casas[], int jogador[])
{
	if (i < m)
	{
		int dado, valor;
		scanf("%d", &dado);

		valor = dado + jogador[i];

		if (valor > 0)
		{
			valor = valor % n;
		}

		if (casas[valor] != 0)
		{
			valor += casas[valor];

			if (valor < 0)
			{
			    valor = decomporTabuleiro(valor*(-1), n);
				valor = n - valor;
			}
			else{
			    valor = valor % n;
			}
		}

		jogador[i] = valor;

		rodadaSapo(i+1, n, m, casas, jogador);
	}
}

void jogoSapo(int n, int m, int o, int casas[], int jogador[])
{
	if (o > 0)
	{
		rodadaSapo(0, n, m, casas, jogador);
		jogoSapo(n, m, o-1, casas, jogador);
	}
}

void lerJogador(int i, int m, int jogador[])
{
	if (i < m)
	{
		jogador[i] = 0;
		lerJogador(i+1, m, jogador);
	}
}

void lerCasas(int i, int n, int casas[])
{
	if (i < n)
	{
		scanf("%d", &casas[i]);
		lerCasas(i+1, n, casas);
	}
}

int main ()
{
	int n, m, o;
	scanf("%d%d%d", &n, &m, &o);
	int casas[n], jogador[m];

	lerCasas(0, n, casas);

	lerJogador(0, m, jogador);

	jogoSapo(n, m, o, casas, jogador);

	imprimirJogadores(0, m, jogador);

	return 0;
}
