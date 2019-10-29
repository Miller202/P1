#include <stdio.h>

int main()
{
    float salario, novosalario;
    scanf("%f", &salario);
    if(salario>=500.0)
    {
        novosalario = salario + (salario*10/100);
        printf("%.2f\n", novosalario);
    }
    else if(salario>=300.0 && salario<500.0)
    {
        novosalario = salario + (salario*7/100);
        printf("%.2f\n", novosalario);
    }
    else
    {
        novosalario = salario + (salario*5/100);
        printf("%.2f\n", novosalario);
    }
    return 0;
}
