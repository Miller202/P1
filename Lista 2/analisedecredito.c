#include <stdio.h>
int main()
{
    double valordescontado, salario, comprometimento;
    scanf("%lf", &salario);
    scanf("%lf", &comprometimento);
    valordescontado = (salario*0.3) - comprometimento;

    if(valordescontado > 0)
    {
        printf("%.2lf\n",valordescontado);
    }
    else
    {
        printf("0.00");
    }

    return 0;
}

