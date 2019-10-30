#include <stdio.h>

#define T 9

typedef struct numerosSudoku quant;

struct numerosSudoku{
    int matriz[T][T];
    int valor[T];
};

int colunas(int i, int j, int num, int matriz[][T])
{
    if(num < T)
    {
        if(num == i)
        {
            colunas(i, j, num+1, matriz);
        }
        else if(matriz[i][j] == matriz[num][j])
        {
            return 0;
        }
        else{
            colunas(i, j, num+1, matriz);
        }
    }
    else{
        return num;
    }
}

int linhas(int i, int j, int num, int matriz[][T])
{
    if(num < T)
    {
        if(num == j)
        {
            linhas(i, j, num+1, matriz);
        }
        else if(matriz[i][j] == matriz[i][num])
        {
            return 0;
        }
        else{
            linhas(i, j, num+1, matriz);
        }
    }
    else{
        return num;
    }
}

int sudoku(int i, int j, int n, int m, int matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            if((linhas(i, j, 0, matriz) > 0) && (colunas(i, j, 0, matriz) > 0))
            {
                sudoku(i, j+1, n, m, matriz);
            }
            else{
                return 0;
            }
        }
        else{
            sudoku(i+1, 0, n, m, matriz);
        }
    }
    else{
        return 1;
    }
}

void verificarSudoku(int i, int num, quant valor[])
{
    if(i == num-1)
    {
        if(sudoku(0, 0, T, T, valor[i].matriz) == 1)
        {
            printf("Instancia %d\nSIM\n", i+1);
            verificarSudoku(i+1, num, valor);
        }
        else{
            printf("Instancia %d\nNAO\n", i+1);
            verificarSudoku(i+1, num, valor);
        }
    }
    else if(i < num-1)
    {
        if(sudoku(0, 0, T, T, valor[i].matriz) == 1)
        {
            printf("Instancia %d\nSIM\n\n", i+1);
            verificarSudoku(i+1, num, valor);
        }
        else{
            printf("Instancia %d\nNAO\n\n", i+1);
            verificarSudoku(i+1, num, valor);
        }
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

void lerStruct(int i, int num, quant valor[])
{
    if(i < num)
    {
        lerMatriz(0, 0, T, T, valor[i].matriz);

        lerStruct(i+1, num, valor);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    quant valor[num];

    lerStruct(0, num, valor);
    verificarSudoku(0, num, valor);

    return 0;
}
