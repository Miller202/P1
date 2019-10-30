#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 999

typedef struct lanchonete pedido;

struct lanchonete{
    int codLED;
    char descricao[50];
    float preco;
};

float calculaPreco(int i, int cod, float quant, int pedidos, pedido p[])
{
    if(i < pedidos)
    {
        if(p[i].codLED == cod)
        {

            return p[i].preco*quant;
        }
        else
        {
            return calculaPreco(i+1, cod, quant, pedidos, p);
        }
    }
    else
    {
        return 0;
    }
}

void lerPedidos(int i, pedido p[], float valor)
{
    int cod;
    float quant, total;

    scanf("%d", &cod);

    if(cod != 0)
    {
        scanf("%f", &quant);

        if(quant < 0)
        {
            lerPedidos(i+1, p, valor);
        }
        else
        {
            total = calculaPreco(0, cod, quant, i+1, p);
            valor += total;
            lerPedidos(i+1, p, valor);
        }
    }
    else
    {
        printf("%.2f", valor);
    }
}

void lerStruct(int i, int n, pedido p[])
{
    if(i < n)
    {
        scanf("%d\n", &p[i].codLED);
        fgets(p[i].descricao, 50, stdin);
        scanf("%f", &p[i].preco);

        lerStruct(i+1, n, p);
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);

    pedido p[n];

    lerStruct(0, n, p);
    lerPedidos(0, p, 0);

	return 0;
}
