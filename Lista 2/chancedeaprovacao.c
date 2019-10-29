#include <stdio.h>
int main()
{
    float nproblemas, nresolvidos, percentual;
    scanf("%f %f", &nproblemas, &nresolvidos);
    percentual = ((nresolvidos/nproblemas)*100.0);
    if(percentual>=0 && percentual<20)
    {
        printf("%.2f%% 4.40%% Pessimo\n", percentual);
    }
    else if(percentual>=20 && percentual<40)
    {
        printf("%.2f%% 31.65%% Ruim\n", percentual);
    }
    else if(percentual>=40 && percentual<60)
    {
        printf("%.2f%% 56.82%% Bom\n", percentual);
    }
    else if(percentual>=60 && percentual<80)
    {
        printf("%.2f%% 80.00%% Muito Bom\n", percentual);
    }
    else if(percentual>=80 && percentual<=100)
    {
        printf("%.2f%% 94.00%% Excelente", percentual);
    }
    return 0;
}
