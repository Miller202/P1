#include <stdio.h>

int ehprimo(int n, int divisivel)
{
    int primo = 1;

    if(n == 0 || n == 1) {
        return 0;
    }

    else if(divisivel>1){
        if (n%divisivel == 0)
        {
            primo=0;

        }
        return primo * ehprimo(n, divisivel-1);
    }

    return primo;
}

int controle(int n)
{
    scanf("%d", &n);
    if(n!=-1){
        printf("%d\n", ehprimo(n, n-1));
        return controle(n);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    controle(n);
    return 0;
}
