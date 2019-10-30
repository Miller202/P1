#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int quantGanhadores(int n, int m, int apostas[][m], int sorteado[])
{
    int i, j, k;
    int acertos, ganhadores=0;

    for (i = 0; i < n; i++)
    {
        acertos = 0;

        for (k = 0; k < 6; k++)
        {
            for (j = 0; j < m; j++)
            {
                if (apostas[i][j] == sorteado[k])
                {
                    acertos+=1;
                }
            }
        }

        if (acertos >= 6)
        {
            ganhadores+=1;
        }
    }

    return ganhadores;
}

void lerArray(int i, int n, int array[])
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        lerArray(i+1, n, array);
    }
}

void lerMatriz(int i, int j, int n, int m, int matriz[][m], int num, char c)
{
    if(i < n)
    {
        if(j < m)
        {
            if (c != '\n')
            {
                scanf("%d", &num);
                scanf("%c", &c);
                matriz[i][j] = num;
            }
            else{
                matriz[i][j] = -1;
            }

            lerMatriz(i, j+1, n, m, matriz, num, c);
        }
        else{
            c = '0';
            lerMatriz(i+1, 0, n, m, matriz, num, c);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int apostas[n][10], sorteado[6];

    lerMatriz(0, 0, n, 10, apostas, 0, '0');
    lerArray(0, 6, sorteado);

    int ganhadores = quantGanhadores(n, 10, apostas, sorteado);
    printf("Total de ganhadores: %d\n", ganhadores);

    return 0;
}
