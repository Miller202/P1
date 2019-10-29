#include <stdio.h>

int mdc(int dividendo, int divisor)
{
    if(divisor == 0)
    {
        return dividendo;
    }
    else{
        return mdc(divisor,dividendo%divisor);
    }
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d\n", mdc(n1,n2));
    return 0;
}
