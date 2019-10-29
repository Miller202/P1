#include <stdio.h>
#include <math.h>

void batalha(double v1, double v2, double d1, double d2)
{
    if(v1 <= 0)
    {
        printf("Bezaliel\n");
        return;
    }

    if(ceil(v1/d2) >= ceil(v2/d1))
    {
        printf("Clodes\n");
        return;
    }

    v1 -= d2;
    d1+=50;

    batalha(v1, v2, d1, d2);
}

void controle(int n)
{
    if(n > 0)
    {
        double v1, v2, d1, d2;

        scanf("%lf %lf %lf %lf", &v1, &v2, &d1, &d2);

        batalha(v1, v2, d1, d2);

        controle(n-1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    controle(n);

    return 0;
}
