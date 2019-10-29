#include <stdio.h>
int main()
{
    float vlmax, vlcarro;
    scanf("%f", &vlmax);
    scanf("%f", &vlcarro);
    if(vlmax>=vlcarro)
    {
        printf("0.00\n0");
    }
    else if(vlcarro <= vlmax * 1.2)
    {
        printf("85.13\n4");
    }
    else if(vlcarro > vlmax * 1.2 && vlcarro <= vlmax * 1.5)
    {
        printf("127.69\n5");
    }
    else if(vlcarro > vlmax * 1.5)
    {
        printf("574.62\n7");
    }
    return 0;
}
