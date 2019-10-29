#include <stdio.h>

void imprimir_array(int i, int n, int array[])
{
    if (i < n)
    {
        if(i == n-1)
        {
            printf("%d", array[i]);
        }
        else{
            printf("%d ", array[i]);
        }
        imprimir_array(i + 1, n, array);
    }
}

void inverso(int i, int j, int n, int array[])
{
    if(i < n)
    {
        int aux = array[i];
        array[i] = array[j];
        array[j] = aux;
        inverso(i+1, j-1, n, array);
    }
}

void ler_array(int i, int n, int array[])
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        ler_array(i+1, n, array);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    ler_array(0, n, array);
    inverso(0, n-1, n/2, array);
    imprimir_array(0, n, array);

    return 0;
}
