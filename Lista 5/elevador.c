#include <stdio.h>

int elevador(int i, int n, int c, int quant, int aux)
{
    int s, e;

    if(i < n)
    {
        scanf("%d %d", &s, &e);

        quant += e - s;

        if(quant > c)
        {
            aux = 1;
        }

        elevador(i+1, n, c, quant, aux);
    }
    else
    {
        return (aux == 1) ? printf("S") : printf("N");
    }
}

int main()
{
    int n, c;
    scanf("%d %d", &n, &c);
    elevador(0, n, c, 0, 0);
    return 0;
}
