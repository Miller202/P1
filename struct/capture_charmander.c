#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct charmander diaIdeal;

struct charmander
{
    int ordem;
    char dia;
    int mes;
    double chanceChuva;
};

void imprimirMensagem(char *mensagemFinal, diaIdeal diaIdeal)
{
    if(diaIdeal.chanceChuva > 0.5)
    {
        strcat(mensagemFinal, "Proximo ano eu tento denovo...");
    }
    else{
        strcat(mensagemFinal, "O melhor dia e no ");

        switch(diaIdeal.ordem / 2)
        {
            case 0:
                strcat(mensagemFinal, "Primeiro ");
                break;
            case 1:
                strcat(mensagemFinal, "Segundo ");
                break;
            case 2:
                strcat(mensagemFinal, "Terceiro ");
                break;
            case 3:
                strcat(mensagemFinal, "Quarto ");
                break;
        }

        switch(diaIdeal.dia)
        {
            case 'S':
                strcat(mensagemFinal, "Sabado de ");
                break;
            case 'D':
                strcat(mensagemFinal, "Domingo de ");
                break;
        }

        char meses[12][12] = { "Janeiro", "Fevereiro", "Marco", "Abril",
            "Maio", "Junho", "Julho", "Agosto",
            "Setembro", "Outubro", "Novembro", "Dezembro"};

        strcat(mensagemFinal, meses[diaIdeal.mes]);

    }
}

void escolherDiasIdeais(int n, int m, double dias[][m], diaIdeal *diaIdeal)
{
    int i, j;

    diaIdeal->ordem = 0;
    diaIdeal->dia = 'S';
    diaIdeal->mes = 0;
    diaIdeal->chanceChuva = dias[0][0];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(dias[i][j] < diaIdeal->chanceChuva)
            {
                diaIdeal->ordem = j;
                if(j%2==0)
                {
                    diaIdeal->dia = 'S';
                }
                else{
                    diaIdeal->dia = 'D';
                }
                diaIdeal->mes = i;
                diaIdeal->chanceChuva = dias[i][j];
            }
        }
    }
}

void lerMatriz(int i, int j, int n, int m, double matriz[][m])
{
    if(i < n)
    {
        if(j < m)
        {
            scanf("%lf", &matriz[i][j]);
            lerMatriz(i, j+1, n, m, matriz);
        }
        else{
            lerMatriz(i+1, 0, n, m, matriz);
        }
    }
}

int main()
{
    double diasAno[12][8];

    lerMatriz(0, 0, 12, 8, diasAno);

    diaIdeal diaIdeal = {-1, '0', -1, 0};

    escolherDiasIdeais(12, 8, diasAno, &diaIdeal);

    char mensagemFinal[51];

    imprimirMensagem(mensagemFinal, diaIdeal);

    printf("%s", mensagemFinal);

    return 0;
}
