#include <stdio.h>

int repetido(int i, int n, int array[], int elemento)
{
    if(i < n)
    {
        return (array[i] == elemento)
            ? 1 + repetido(i+1, n, array, elemento)
            : repetido(i+1, n, array, elemento);
    }
    else{
        return 0;
    }
}

void soma(int i, int n, int array[], int soma1, int soma2)
{
    if(i < n)
    {

        if(repetido(0, i, array, array[i]) == 0)
        {
            if(array[i]%2 == 0)
            {
                soma1+=array[i];
            }
            else{
                soma2+=array[i];
            }
        }

        soma(i+1, n, array, soma1, soma2);
    }
    else{
        if(soma1 > soma2)
        {
            printf("%d\n", soma1);
        }
        else{
            printf("%d\n", soma2);
        }
    }
}

void quantidade(int i, int n, int array[], int quantjoao, int quantmaria)
{
    if(i < n)
    {
        if(array[i]%2 == 0)
        {
            quantjoao+=1;
        }
        else{
            quantmaria+=1;
        }
        return quantidade(i+1, n, array, quantjoao, quantmaria);
    }
    else{
        printf("%d\n%d\n", quantjoao, quantmaria);
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
    int n;
    scanf("%d", &n);
    int array[n];
    lerArray(0, n, array);
    quantidade(0, n, array, 0, 0);
    soma(0, n, array, 0, 0);
    return 0;
}
