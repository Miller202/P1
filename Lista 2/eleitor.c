#include <stdio.h>
int main()
{
    int eleitor;
    scanf("%d", &eleitor);
    if(eleitor<16)
    {
        printf("nao eleitor\n");
    }
    else if(eleitor>=18 && eleitor<=65)
    {
        printf("eleitor obrigatorio\n");
    }
    else if(eleitor>=16 && eleitor<18 || eleitor>65)
    {
        printf("eleitor facultativo\n");
    }
    return 0;
}
