#include <stdio.h>

int multiplo(int n, int a, int b, int *verifica);

int main()
{
    int n, a, b;

    scanf("%d", &n);
    scanf("%d %d", &a, &b);

    int verifica=0;

    multiplo(n, a, b, &verifica);

    if(verifica==0){
        printf("INEXISTENTE");
    }

    return 0;

}

int multiplo(int n, int a, int b, int *verifica)
{

    if(a>b)
    {
        return 0;
    }

    if(a%n==0)
    {
        printf("%d\n", a);
        *verifica = 1;
    }

    a += 1;

    return multiplo(n, a, b, verifica);

}
