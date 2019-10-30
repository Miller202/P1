#include <stdio.h>
#include <limits.h>

int diagonalPrincipal(int i, int j, int matriz[][3])
{
    if(i < 3)
    {
        return matriz[i][j] + diagonalPrincipal(i+1, j+1, matriz);
    }
    else{
        return 0;
    }
}

void brincando(int i, int j, int matriz[][3], int soma, int maior)
{
    if(i < 3)
    {
        if(j < 3)
        {
            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }

            soma += matriz[i][j];

            brincando(i, j+1, matriz, soma, maior);
        }
        else{
            brincando(i+1, 0, matriz, soma, maior);
        }
    }
    else{
        double media = ((double)(soma))/9;
        printf("%.2lf ", media);
        printf("%d ", maior);

        if(maior == 0)
        {
            printf("0 ");
        }
        else if(maior > 0)
        {
            printf("1 ");
        }
        else{
            printf("-1 ");
        }

        printf("%d", diagonalPrincipal(0, 0, matriz));
    }
}

void ler_matriz(int i, int j, int matriz[][3])
{
    if(i < 3)
    {
        if(j < 3)
        {
            scanf("%d", &matriz[i][j]);
            ler_matriz(i, j+1, matriz);
        }
        else{
            ler_matriz(i+1, 0, matriz);
        }
    }
}

int main()
{
    int matriz[3][3];

    ler_matriz(0, 0, matriz);

    brincando(0, 0, matriz, 0, INT_MIN);

    return 0;
}
