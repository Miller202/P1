#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    double x1,x2,delta,raizdelta;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    delta = pow(b,2) - 4*a*c;
    if(a!=0)
    {
        if(delta<0)
        {
            printf("NRR\n");
        }
        else
        {
            raizdelta = pow(delta,0.5);
            x1 = (-b+raizdelta)/(2*a);
            x2 = (-b-raizdelta)/(2*a);
            printf("%.2lf\n%.2lf\n", x1, x2);
        }
    }
    else
    {
        printf("NEESG\n");
    }
    return 0;
}
