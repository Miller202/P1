#include <stdio.h>

#define TAM 3

int somaMatriz(int i, int j, int n, int m, int matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            return matriz[i][j] + somaMatriz(i, j+1, n, m, matriz);
        }
        else{
            return somaMatriz(i+1, 0, n, m, matriz);
        }
    }
    else{
        return 0;
    }
}

int diagonalSecundaria(int i, int j, int n, int m, int matriz[][m])
{
    if(j >= 0)
    {
        return matriz[i][j] + diagonalSecundaria(i+1, j-1, n, m, matriz);
    }
    else{
        return 0;
    }
}

int diagonalPrincipal(int i, int j, int n, int m, int matriz[][m])
{
    if(i < n)
    {
        return matriz[i][j] + diagonalPrincipal(i+1, j+1, n, m, matriz);
    }
    else{
        return 0;
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

void duelo(int luke, int darthVader)
{
    if((scanf("%[^\n]") != EOF) && (luke > 0 && darthVader > 0))
    {
        int i, j;
        int matrizLuke[TAM][TAM], matrizVader[TAM][TAM];
        int diagonalPrincipal1, diagonalPrincipal2;
        int diagonalSecundaria1, diagonalSecundaria2;

        lerMatriz(0, 0, TAM, TAM, matrizLuke);
        lerMatriz(0, 0, TAM, TAM, matrizVader);

        diagonalPrincipal1 = diagonalPrincipal(0, 0, TAM, TAM, matrizLuke);
        diagonalSecundaria1 = diagonalSecundaria(0, 2, TAM, TAM, matrizLuke);

        i = somaMatriz(0, 0, TAM, TAM, matrizLuke);

        diagonalPrincipal2 = diagonalPrincipal(0, 0, TAM, TAM, matrizVader);
        diagonalSecundaria2 = diagonalSecundaria(0, 2, TAM, TAM, matrizVader);

        j = somaMatriz(0, 0, TAM, TAM, matrizVader);

        if((i == TAM) && (j == TAM))
        {
            if((diagonalPrincipal1 == diagonalPrincipal2) && (diagonalSecundaria1 == diagonalSecundaria2))
            {
                duelo(luke-15, darthVader-15);
            }
            else if((diagonalPrincipal1 == TAM || diagonalSecundaria1 == TAM) && (diagonalPrincipal2 != TAM && diagonalSecundaria2 != TAM))
            {
                duelo(luke, darthVader-15);
            }
            else if((diagonalPrincipal2 == TAM || diagonalSecundaria2 == TAM) && (diagonalPrincipal1 != TAM && diagonalSecundaria1 != TAM))
            {
                duelo(luke-15, darthVader);
            }
            else
            {
                duelo(luke, darthVader);
            }
        }
        else
        {
            if(i != TAM && j == TAM)
            {
                duelo(luke-15, darthVader);
            }
            else if(i == TAM && j != TAM)
            {
                duelo(luke, darthVader-15);
            }
            else{
                duelo(luke, darthVader);
            }
        }
    }
    else{
        if(luke > darthVader)
        {
            printf("Luke Skywalker venceu.");
        }
        else if(darthVader > luke)
        {
            printf("Darth Vader venceu.");
        }
        else{
            printf("Houve empate.");
        }
    }
}

int main()
{
    int luke, darthVader;

    scanf("%d %d", &luke, &darthVader);

    duelo(luke, darthVader);

    return 0;
}
