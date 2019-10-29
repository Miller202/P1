#include <stdio.h>
void calculo(double salario, double porcento, double aumento, double novosalario);
int main()
{
    double salario, porcento, aumento, novosalario;
    scanf("%lf", &salario);
    if(salario<=280.00)
    {
        calculo(salario, 20, aumento, novosalario);
    }
    else if(salario>280 && salario<=700)
    {
        calculo(salario, 15, aumento, novosalario);
    }
    else if(salario>700 && salario<1500)
    {
        calculo(salario, 10, aumento, novosalario);
    }
    else if(salario>=1500)
    {
        calculo(salario, 5, aumento, novosalario);
    }

    return 0;
}
void calculo(double salario, double porcento, double aumento, double novosalario)
{
    aumento = salario*(porcento/100);
    novosalario = salario + aumento;
    int valor;
    valor =(int)porcento;
    printf("%.2lf\n%d\n%.2lf\n%.2lf\n", salario, valor, aumento, novosalario);
}
