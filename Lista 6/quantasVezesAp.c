#include <stdio.h>

int nVezes(int i, int x, int array[])
{
    if(i == 10)
    {
        return 0;
    }
    else{
        return (array[i] == x)
        ? 1 + nVezes(i+1, x, array)
        : nVezes(i+1, x, array);
    }
}

void lerArray(int i, int array[])
{
    if(i < 10)
    {
        scanf("%d", &array[i]);
        lerArray(i+1, array);
    }
}

int main()
{
    int x, array[10];

    lerArray(0, array);
    scanf("%d", &x);

    int vezes = nVezes(0, x, array);
    printf("%d", vezes);

    return 0;
}
