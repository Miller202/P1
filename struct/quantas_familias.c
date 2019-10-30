#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct familia familiar;

struct familia
{
    char nome[20];
    int idade;
    int sexo;
    int parentesco;
    int parente;
};

void imprimirFamiliares(int n, int quant, familiar f[], familiar velho[])
{
    int i, j;
    int aux, integrantes=0;

    printf("\n");

    for(i = 0; i < quant; i++)
    {
        if(f[i].parente != i)
        {
            aux = 0;

            while(f[aux].parente != i)
            {
                aux+=1;
            }

            sprintf(velho[i].nome, "%s", f[aux].nome);
            velho[i].idade = f[aux].idade;
            velho[i].sexo = f[aux].sexo;
            velho[i].parentesco = f[aux].parentesco;
            velho[i].parente = f[aux].parente;
        }
        else{
            sprintf(velho[i].nome, "%s", f[i].nome);
            velho[i].idade = f[i].idade;
            velho[i].sexo = f[i].sexo;
            velho[i].parentesco = f[i].parentesco;
            velho[i].parente = f[i].parente;
        }

        for(j = 0; j < n; j++)
        {
            if(strcmp(velho[i].nome, f[j].nome) != 0)
            {
                if(velho[i].parente == f[j].parente)
                {
                    integrantes+=1;

                    if(velho[i].idade == f[j].idade)
                    {
                        if(f[j].sexo == 0 && velho[i].sexo == 1)
                        {
                            sprintf(velho[i].nome, "%s", f[j].nome);
                            velho[i].idade = f[j].idade;
                            velho[i].sexo = f[j].sexo;
                            velho[i].parentesco = f[j].parentesco;
                            velho[i].parente = f[j].parente;
                        }
                    }
                    else if(velho[i].idade < f[j].idade)
                    {
                        sprintf(velho[i].nome, "%s", f[j].nome);
                        velho[i].idade = f[j].idade;
                        velho[i].sexo = f[j].sexo;
                        velho[i].parentesco = f[j].parentesco;
                        velho[i].parente = f[j].parente;
                    }
                }
            }
        }

        printf("Familia: %d\n", i+1);
        printf("Tamanho da Familia: %d\n", integrantes+1);
        printf("Integrante mais velho: %s\n", velho[i].nome);
        printf("Idade do integrante mais velho: %d\n\n", velho[i].idade);
        integrantes = 0;
    }
}

int calcularQuant(int n, familiar f[])
{
    int i, j;
    int aux, valor=0, quant=0;

    for(i = 0; i < n; i++)
    {
        if(f[i].parentesco != -1)
        {
            j = i;

            while(f[j].parentesco != -1)
            {
                f[j].parente = valor;
                aux = f[j].parentesco;
                f[j].parentesco = -1;
                j = aux;
            }
            valor+=1;
            quant+=1;
        }
    }

    return quant;
}

void lerParentescos(int i, int n, familiar f[])
{
    if(i < n)
    {
        scanf("%d", &f[i].parentesco);
        lerParentescos(i+1, n, f);
    }
}

void iniciarParentescos(int i, int n, familiar f[])
{
    if(i < n)
    {
        f[i].parentesco = 0;
        f[i].parente = 0;
        iniciarParentescos(i+1, n, f);
    }
}

void lerFamiliar(int i, int n, familiar f[])
{
    if(i < n)
    {
        scanf(" %s", f[i].nome);
        scanf("%d", &f[i].idade);
        scanf("%d", &f[i].sexo);
        lerFamiliar(i+1, n, f);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    familiar f[n];

    lerFamiliar(0, n, f);
    iniciarParentescos(0, n, f);
    lerParentescos(0, n, f);

    int quant = calcularQuant(n, f);
    printf("Quantidade de Familias: %d\n", quant);

    familiar velho[quant];

    imprimirFamiliares(n, quant, f, velho);

    return 0;
}
