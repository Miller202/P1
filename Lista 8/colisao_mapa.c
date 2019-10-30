#include <stdio.h>

void andandoMapa(int i, int n, char direcao[])
{
    if(i == n)
    {
        direcao[i] = '\0';
    }
    else{
        direcao[i] = getchar();
		getchar();
		andandoMapa(i+1, n, direcao);
    }
}

void percorrendoMapa(int i, int n, int m, int matriz[][m], int d, int l, int c, char direcao[])
{
	if (i < d)
	{
		if (direcao[i] == 'D')
		{
			if ((matriz[l][c+1] == 1) && (c+1 < m))
			{
				c+=1;
			}
		}
		else if (direcao[i] == 'E')
		{
			if ((matriz[l][c-1] == 1) && (c-1 >= 0) )
			{
				c-=1;
			}
		}
		else if (direcao[i] == 'C')
		{
			if ((matriz[l-1][c] == 1) && (l-1 >= 0))
			{
				l-=1;
			}
		}
        else if (direcao[i] == 'B')
		{
			if ((matriz[l+1][c] == 1) && (l+1 < n))
			{
				l+=1;
			}
		}

		percorrendoMapa(i+1, n, m, matriz, d, l, c, direcao);
	}
	else{
	    printf("(%d,%d)\n", l, c);
	}
}

void lerMatriz(int i, int j, int n, int m, int matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%d", &matriz[i][j]);
            lerMatriz(i, j+1, n, m, matriz);
        }
        else{
            lerMatriz(i+1, 0, n, m, matriz);
        }
    }
}

int main ()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int matriz[n][m];
	lerMatriz(0, 0, n, m, matriz);

    int d;
	scanf("%d ", &d);
	char direcao[d+1];
	andandoMapa(0, d, direcao);

    int l, c;
	scanf("%d %d", &l, &c);
	percorrendoMapa(0, n, m, matriz, d, l, c, direcao);

	return 0;
}
