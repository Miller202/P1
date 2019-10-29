#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a==b && b==c && a==c)
    {
        printf("1\n");
    }
    else if(a!=b && a!=c && b!=c)
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }
    return 0;
}
