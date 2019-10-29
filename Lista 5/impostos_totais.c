#include <stdio.h>

int main()
{
    double cotacao, aliquota, valorproduto, valorfrete;
    double valortotal, importacao, finalicms, icms, impostos, totalpagar;

    scanf("%lf %lf %lf %lf", &cotacao, &aliquota, &valorproduto, &valorfrete);

    valorproduto = valorproduto * cotacao;
    valorfrete = valorfrete * cotacao;
    valortotal = valorproduto + valorfrete;
    aliquota = aliquota/100;

    if(valorproduto >= (2500.00*cotacao))
    {
        importacao = valorproduto * 0.6;
        finalicms = (valorproduto + importacao)/(1-aliquota);
    }
    else{
        importacao = valortotal * 0.6;
        finalicms = (valortotal + importacao)/(1-aliquota);
    }

    icms = finalicms*aliquota;
    impostos = icms + importacao;
    totalpagar = valortotal + impostos;

    printf("%.2lf\n", cotacao);
    printf("%.2lf\n", valorproduto);
    printf("%.2lf\n", valorfrete);
    printf("%.2lf\n", valortotal);
    printf("%.2lf\n", importacao);
    printf("%.2lf\n", icms);
    printf("%.2lf\n", impostos);
    printf("%.2lf\n", totalpagar);

    if(valorproduto >= (2500.00*cotacao))
    {
        printf("Impostos calculados sem o frete\n");
    }
    else{
        printf("Impostos calculados com o frete\n");
    }

    return 0;
}
