#include <stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    if(n1<=n2 && n1<=n3)
    {
        printf("%d\n", n1);
    }
    else if(n2<=n1 && n2<=n3)
    {
        printf("%d\n", n2);
    }
    else if(n3<=n1 && n3<=n2)
    {
        printf("%d\n", n3);
    }
    return 0;
}
