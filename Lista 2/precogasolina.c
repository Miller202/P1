#include <stdio.h>

int main()
{
    double litros;
    char tipo;
    scanf("%lf", &litros);
    scanf("%s", &tipo);
    descontos(litros,tipo);
    return 0;
}

void descontos(double litros, char tipo)
{
    if(litros<=20.0 && tipo == 'A')
    {
        calculo(litros, 3, 1.9);
    }
    else if(litros>20.0 && tipo == 'A')
    {
        calculo(litros, 5, 1.9);
    }
    else if(litros<=20.0 && tipo == 'G')
    {
        calculo(litros, 4, 2.5);
    }
    else if(litros>20.0 && tipo == 'G')
    {
        calculo(litros, 6, 2.5);
    }
    else if(litros<=25.0 && tipo == 'D')
    {
        calculo(litros, 0, 1.66);
    }
    else if(litros>25.0 && tipo == 'D')
    {
        calculo(litros, 4, 1.66);
    }
}

void calculo(double litros, int porcento, double preco)
{
    double valor = (litros * preco);
    double desconto = valor * porcento/100;
    printf("R$ %.2lf", valor - desconto);
}
