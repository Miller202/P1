#include <stdio.h>
int main()
{
    double valorgasto, valorpagar;
    scanf("%lf", &valorgasto);
    valorpagar = valorgasto + valorgasto*10/100;
    printf("%.2lf\n", valorpagar);
    return 0;
}
