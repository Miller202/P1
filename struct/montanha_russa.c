#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct losantos losantos;

struct losantos{
    int valor;
};

void imprimir(int i, losantos l[], int procurar)
{
    if(l[i].valor != -1)
    {
        if(l[i].valor == procurar)
        {
            printf("O bilhete sorteado e o %d e esta no carrinho %d", l[i].valor, i+1);
        }
        else{
            imprimir(i+1, l, procurar);
        }
    }
}

int pegarValor(int i, losantos l[], int procurar)
{
    if(l[i].valor != -1)
    {
        if(l[i].valor == procurar)
        {
            return procurar;
        }
        else{
            pegarValor(i+1, l, procurar);
        }
    }
}

void montanha(int i, losantos l[])
{
    scanf("%d", &l[i].valor);

    if(l[i].valor != -1)
    {
        montanha(i+1, l);
    }
}

int main()
{
    int procurar;
    losantos l[999999];
    montanha(0, l);
    scanf("%d", &procurar);
    int pegou = pegarValor(0, l, procurar);
    if(pegou == 0)
    {
        printf("Nenhum carrinho foi sorteado");
    }
    else{
        imprimir(0, l, procurar);
    }

	return 0;
}
