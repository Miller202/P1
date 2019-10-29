#include <stdio.h>

int divisao(int n, int i, int multiplos);

int main()
{
    int n, i = 1, multiplos = 0;

    scanf("%d", &n);

    divisao(n, i, multiplos);

    return 0;
}

int divisao(int n, int i, int multiplos)
{
    if(n >= i)
    {
        if((n % i == 0) && (i % 3 == 0))
        {
            return divisao(n, i + 1, multiplos + 1);
        }
        else{
            return divisao(n, i + 1, multiplos);
        }
    }

    if(multiplos == 0)
    {
        printf("O numero nao possui divisores multiplos de 3!\n");
    }
    else{
        printf("%d\n", multiplos);
    }

}
