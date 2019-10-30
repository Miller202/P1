#include <stdio.h>

void imprimir_matriz(int i, int j, int n, int matriz[][n], int matriz2[][n])
{
    if(i < n)
    {
        if(j < n)
        {
            printf("%d\n", matriz[i][j] + matriz2[i][j]);
            imprimir_matriz(i, j+1, n, matriz, matriz2);
        }
        else{
            imprimir_matriz(i+1, 0, n, matriz, matriz2);
        }
    }
}

void ler_matriz(int i, int j, int n, int matriz[][n])
{
    if(i < n)
    {
        if(j < n)
        {
            scanf("%d", &matriz[i][j]);
            ler_matriz(i, j+1, n, matriz);
        }
        else{
            ler_matriz(i+1, 0, n, matriz);
        }
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    if(n == 0)
    {
        printf("Vazia");
    }
    else{
        int matriz[n][n];
        int matriz2[n][n];

        ler_matriz(0, 0, n, matriz);
        ler_matriz(0, 0, n, matriz2);

        imprimir_matriz(0, 0, n, matriz, matriz2);
    }

    return 0;
}
