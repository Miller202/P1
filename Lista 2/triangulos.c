#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if(a!=b && b!=c && a!=c)
    {
        printf("escaleno\n");
    }
    else if(a==b && b==c && a==c)
    {
        printf("equilatero\n");
    }
    else if(a==b || b==c || a==c)
    {
        printf("isosceles\n");
    }

    return 0;
}
