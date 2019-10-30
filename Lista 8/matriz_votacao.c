#include <stdio.h>

void imprimir_soma(int i, int j, int n, int m, int matriz[][m], int soma)
{
    if(j < m)
    {
        if(i < n)
        {
            soma += matriz[i][j];
            imprimir_soma(i+1, j, n, m, matriz, soma);
        }
        else{
            printf("Princesa %d: %d voto(s)\n", j+1, soma);
            imprimir_soma(0, j+1, n, m, matriz, 0);
        }
    }
}

void ler_matriz(int i, int j, int n, int m, int matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%d", &matriz[i][j]);
            ler_matriz(i, j+1, n, m, matriz);
        }
        else{
            ler_matriz(i+1, 0, n, m, matriz);
        }
    }
}

int main()
{
    int n, m;

    scanf("%d %d", &m, &n);

    int matriz[n][m];

    ler_matriz(0, 0, n, m, matriz);

    imprimir_soma(0, 0, n, m, matriz, 0);

    return 0;
}
