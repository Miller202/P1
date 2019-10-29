#include <stdio.h>

int mdc(int dividendo, int divisor)
{
    if(divisor == 0)
    {
        return dividendo;
    }
    else{
        return mdc(divisor, dividendo%divisor);
    }
}

int controle(int n, int i)
{
    int a, d;
    scanf("%d %d", &a, &d);
    if(i == n){
        printf("MDC(%d,%d) = %d\n", a, d, mdc(a,d));
    }
    else{
        printf("MDC(%d,%d) = %d\n", a, d, mdc(a,d));
        return controle(n, i+1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    return controle(n, 1);
    return 0;
}
