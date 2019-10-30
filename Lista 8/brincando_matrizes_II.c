#include <stdio.h>

int menorMatriz(int i, int j, int matriz[][3], int menor)
{
    if(i < 3)
    {
        if(j < 3)
        {
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }

            menorMatriz(i, j+1, matriz, menor);
        }
        else{
            menorMatriz(i+1, 0, matriz, menor);
        }
    }
    else{
        return menor;
    }
}

int diagonal(int i, int j, int matriz[][3], int sum)
{
    if(i < 3)
    {
        if(j < 3)
        {
            if(i != j)
            {
                sum += matriz[i][j];
            }

            diagonal(i, j+1, matriz, sum);
        }
        else{
            diagonal(i+1, 0, matriz, sum);
        }
    }
    else{
        return sum;
    }
}

void media(int i, int j, int matriz[][3], int soma, int divi)
{
    if(i < 3)
    {
        if(j < 3)
        {
            if(matriz[i][j] > 0)
            {
                soma += matriz[i][j];
            }

            if(matriz[i][j] <= 0)
            {
                divi -= 1;
            }

            media(i, j+1, matriz, soma, divi);
        }
        else{
            media(i+1, 0, matriz, soma, divi);
        }
    }
    else{
        double media = ((double)(soma))/divi;
        printf("%.2lf ", media);
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

    media(0, 0, matriz, 0, 9);

    int menor = menorMatriz(0, 0, matriz, matriz[0][0]);

    printf("%d ", menor);

    if(menor%2==0)
    {
        printf("1 ");
    }
    else
    {
        printf("0 ");
    }

    printf("%d", diagonal(0, 0, matriz, 0));

    return 0;
}
