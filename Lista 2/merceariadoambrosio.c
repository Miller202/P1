#include <stdio.h>
int main()
{
    int codigo, quantidade;
    double valor, pagamento;
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    if(codigo==1)
    {
        valor=5.3;
    }
    else if(codigo==2)
    {
        valor=6.0;
    }
    else if(codigo==3)
    {
        valor=3.2;
    }
    else if(codigo==4)
    {
        valor=2.5;
    }

    pagamento = valor*quantidade;

    if(quantidade>=15 || pagamento>=40)
    {
        pagamento = pagamento - (pagamento*0.15);
    }
    printf("R$ %.2lf", pagamento);

    return 0;
}
