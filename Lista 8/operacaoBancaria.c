#include <stdio.h>

void loop(double credito, double debito)
{
    int op;
    double valor;

    scanf("%d", &op);

    if(op != -1)
    {
        scanf("%lf", &valor);

        if(op == 1)
        {
            credito += valor;
        }
        else if(op == 0)
        {
            debito += valor;
        }

        loop(credito, debito);
    }
    else{
        printf("Creditos: R$ %.2lf\n", credito);
        printf("Debito: R$ %.2lf\n", debito);
        printf("Saldo: R$ %.2lf", credito-debito);
    }
}

int main()
{
    loop(0, 0);
	return 0;
}
