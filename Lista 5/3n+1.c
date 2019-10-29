#include <stdio.h>

int serie(int n)
{
    if (n != 1)
    {
        return (n % 2 == 0)
            ? 1 + serie(n/2)
            : 1 + serie((n*3)+1);
    }
    else{
        return 1;
    }
}

int tamanhoCiclo(int n1, int n2, int maior)
{
    int aux;

    if(n1 == n2)
    {
        return maior;
    }

    if(n1 > n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }

    else{
        if(serie(n1) > maior)
        {
            tamanhoCiclo(n1+1, n2, serie(n1));
        }
        else{
            tamanhoCiclo(n1+1, n2, maior);
        }
    }
}

void loop()
{
    int n1, n2, tam;

    if(scanf("%d %d", &n1, &n2) != EOF)
    {
        tam = tamanhoCiclo(n1, n2, serie(n1));
        printf("%d %d %d\n", n1, n2, tam);
        loop();
    }
}

int main()
{
    loop();

    return 0;
}
