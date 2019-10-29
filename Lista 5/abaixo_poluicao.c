#include <stdio.h>

int poluicao(float totalmensal, int multas)
{
    int quant;

    scanf("%d", &quant);

    if(quant != 999)
    {
        if(quant > 2)
        {
            totalmensal += (quant-2) * 12.89;
            multas += 1;
        }

        return poluicao(totalmensal, multas);
    }
    else{
        printf("%.2f\n%d\n", totalmensal, multas);
    }
}

int main()
{
    float totalmensal;
    int multas;
    poluicao(totalmensal, multas);
	return 0;
}
