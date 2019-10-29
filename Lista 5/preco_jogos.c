#include <stdio.h>

int promocao(int k, int i, int d, float p)
{
    float desconto;

    if(k < 3)
    {
        if(d == 0)
        {
            desconto = ((p)*0.25);
        }
        else if(d == 1)
        {
            desconto = ((p)*0.20);
        }
        else if(d == 2)
        {
            desconto = ((p)*0.18);
        }
        else if(d == 3)
        {
            desconto = ((p)*0.15);
        }
        else if(d == 4)
        {
            desconto = ((p)*0.12);
        }
        else if(d == 5)
        {
            desconto = ((p)*0.10);
        }

        if(p > 100.00)
        {
            p -= desconto;
        }
        else if(p <= 100.00 && p >= 45.00)
        {
            if((p-desconto/2) >= 45.00)
            {
                p -= (desconto/2);
            }
            else{
                p = 45.00;
            }
        }

        return promocao(k+1, i, d, p);
    }
    else{
        printf("Jogo[%d] = R$%.2f\n", i, p);
    }
}

void jogos(int i, int n)
{
    int d;
    float p;

    if(i < n)
    {
        scanf("%d %f", &d, &p);
        promocao(0, i, d, p);
        jogos(i+1, n);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    jogos(0, n);
    return 0;
}
