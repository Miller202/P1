#include <stdio.h>
int main()
{
    int ehestudante, ehidoso;
    scanf("%d", &ehestudante);
    scanf("%d", &ehidoso);
    if(ehestudante == 1 || ehidoso == 1)
    {
        printf("1\n");
    }
    else if(ehestudante == 0 && ehidoso == 0)
    {
        printf("0\n");
    }
    return 0;
}
