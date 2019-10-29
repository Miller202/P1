#include <stdio.h>

int desafio(int maior)
{
    int n;
    scanf("%d", &n);

    if(n!=0)
    {
        if(n > maior)
        {
            maior = n;
        }
        desafio(maior);
    }
    else{
        printf("%d", maior);
    }
}

int main()
{
    desafio(0);
    return 0;
}
