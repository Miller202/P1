#include <stdio.h>

typedef struct paises paises;

struct paises
{
	int ouro;
	int prata;
	int bronze;
	int ID;
};

void imprimirPaises(int n, paises pais[])
{
    int i;

	for(i = 0; i < n; i++)
	{
		printf("%d\n", pais[i].ID);
	}
}

void trocar(paises *pais1, paises *pais2)
{
	paises aux;

	aux = *pais1;
	*pais1 = *pais2;
	*pais2 = aux;
}

void ordenacao(int n , paises pais[])
{
	int i, j;

	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (pais[i].ouro < pais[j].ouro)
			{
				trocar(&pais[i], &pais[j]);
			}
			else if (pais[i].ouro == pais[j].ouro)
			{
				if (pais[i].prata < pais[j].prata)
				{
					trocar(&pais[i], &pais[j]);
				}
				else if (pais[i].prata == pais[j].prata)
				{
					if (pais[i].bronze < pais[j].bronze)
					{
						trocar(&pais[i], &pais[j]);
					}
					if (pais[i].bronze == pais[j].bronze)
					{
						if (pais[i].ID > pais[j].ID)
						{
							trocar(&pais[i], &pais[j]);
						}
					}
				}
			}
		}
	}
}

void lerModalidades(int m, paises pais[])
{
    int i;

	for(i = 0; i < m; i++)
	{
		int o, p, b;
		scanf("%d%d%d", &o, &p, &b);

		pais[o-1].ouro+=1;
		pais[p-1].prata+=1;
		pais[b-1].bronze+=1;
	}
}

void lerPaises(int n, paises pais[])
{
    int i;

	for(i = 0; i < n; i++)
	{
		pais[i].ouro = 0;
		pais[i].prata = 0;
		pais[i].bronze = 0;
		pais[i].ID = i+1;
	}
}

int main ()
{
	int n, m;
	scanf("%d %d", &n, &m);

	paises pais[n];
	lerPaises(n, pais);
	lerModalidades(m, pais);
	ordenacao(n, pais);
	imprimirPaises(n, pais);

	return 0;
}
