#include <stdio.h>

void sequencia(int i, int x, int y, int z, int valor)
{
    if(valor < y+1)
    {

        if(i == x-1)
        {
            printf("%d\n", valor);
            valor += z;
            sequencia(0, x, y, z, valor);
        }
        else
        {
            printf("%d ", valor);
            valor += z;
            sequencia(i+1, x, y, z, valor);
        }
    }
}

int main()
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    sequencia(0, x, y, z, 1);

    return 0;
}
