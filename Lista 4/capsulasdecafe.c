#include <stdio.h>

int capsulas(int i)
{
    int quantidade, quantidadecap;
    char tamanho;

    if(i < 7)
    {
        scanf("%d %c", &quantidade, &tamanho);

        if(tamanho == 'p' || tamanho == 'P')
        {
            quantidadecap = quantidade * 10;
        }
        else if(tamanho == 'g' || tamanho == 'G')
        {
            quantidadecap = quantidade * 16;
        }

        return quantidadecap + capsulas(i+1);
    }
    else{
        return 0;
    }

}

int main()
{
    int quantidadecap, i=0, aux;
    quantidadecap = capsulas(i);
    aux = (quantidadecap * 2) / 7;
    printf("%d\n%d\n", quantidadecap, aux);
    return 0;
}
