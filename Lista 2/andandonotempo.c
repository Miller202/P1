#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a+b == c || b+c == a || a+c == b)
    {
        printf("S");
    }
    else if(a==b || b==c || a==c)
    {
        printf("S");
    }
    else if(a==0 || b==0 || c==0)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
    return 0;
}
