#include <stdio.h>
int main()
{
    int ehhomem, maisde40;
    scanf("%d", &ehhomem);
    scanf("%d", &maisde40);
    if(ehhomem == 0 && maisde40 == 1)
    {
        printf("1\n");
    }
    else if(ehhomem == 1 && maisde40 == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
