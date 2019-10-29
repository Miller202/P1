#include <stdio.h>

void ordenar(int i, int n, int array[], int indexMaior)
{
    if(n)
    {
        if(i < n)
        {

            if(array[i] > array[indexMaior])
            {
                indexMaior = i;
            }

            ordenar(i+1, n, array, indexMaior);
        }
        else
        {
            int aux;
            aux = array[n-1];
            array[n-1] = array[indexMaior];
            array[indexMaior] = aux;
            ordenar(0, n-1, array, 0);
        }
    }
}

void lerArray(int i, int n, int array[])
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        lerArray(i+1, n, array);
    }
}

int main()
{
    int n=6;
    int array[n];
    lerArray(0, n, array);
    ordenar(0, n, array, 0);
    int menor = array[0];
    int maior = array[n-1];
    printf("%d\n%d\n", menor, maior);
    return 0;
}
