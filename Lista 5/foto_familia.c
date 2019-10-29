#include <stdio.h>

float willySort(int i, int n, float array[], int indexMaior)
{
    if(n)
    {
        if(i < n)
        {

            if(array[i] > array[indexMaior])
            {
                indexMaior = i;
            }

            willySort(i+1, n, array, indexMaior);
        }
        else
        {
            float aux;
            aux = array[n-1];
            array[n-1] = array[indexMaior];
            array[indexMaior] = aux;
            willySort(0, n-1, array, 0);
        }
    }
}

float lerArray(int i, int n, float array[])
{
    if(i < n)
    {
        scanf("%f", &array[i]);
        return lerArray(i+1, n, array);
    }
}

int main()
{
    int n = 4;

    float array[n];

    lerArray(0, n, array);

    willySort(0, n, array, 0);

    printf("%.2f\n", array[0]);
    printf("%.2f\n", array[2]);
    printf("%.2f\n", array[3]);
    printf("%.2f\n", array[1]);

    return 0;
}
