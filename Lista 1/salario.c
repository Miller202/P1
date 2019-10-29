#include <stdio.h>
int main()
{
    int numero, horas;
    double valorporhora, salario;

    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valorporhora);

    salario = horas*valorporhora;
    printf("NUMBER = %d\nSALARY = R$ %.2lf\n", numero, salario);

    return 0;
}
