#include <stdio.h>

void sequencia(int i, int x, int y, int valor)
{
    if(valor < y+1)
    {
        if(i == x-1)
        {
            printf("%d\n", valor);
            sequencia(0, x, y, valor+1);
        }
        else
        {
            printf("%d ", valor);
            sequencia(i+1, x, y, valor+1);
        }
    }
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    sequencia(0, x, y, 1);

    return 0;
}
