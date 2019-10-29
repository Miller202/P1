#include <stdio.h>
#include <math.h>
int main()
{
    double raio, area, raioaux;
    scanf("%lf", &raio);
    raioaux = raio*1/100;
    area = pow(raioaux,2) * 3.14159;
    printf("Area = %.4lf\n", area);
    return 0;
}
