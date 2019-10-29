#include <stdio.h>

int eh_primo(int x, int i)
{

    int primo = 1;

    if(x == 0 || x == 1) {
        return 0;
    }

    else if(i>1){
        if (x%i == 0)
        {
            primo=0;

        }
        return primo * eh_primo(x, i-1);
    }

    return primo;

}

int proximo_primo(int y)
{
    if(eh_primo(y, y-1))
    {
        return y;
    }
    else{
        proximo_primo(y+1);
    }
}

int fatorial(int z)
{
    if(z <= 1)
    {
        return 1;
    }
    else{
        return z*fatorial(z-1);
    }
}

double calculoserie(int n, int i)
{

    int num, proxprimo;
    double calculo;

    if(n == 0)
    {
        return 0;
    }

    if(i == 1)
    {
        proxprimo = 1;
    }
    else{
        proxprimo = proximo_primo(i);
    }

    num = fatorial(i);
    calculo = (double) num / proxprimo;

    if(i != n)
    {
        printf("%d!/%d + ", i, proxprimo);
        return calculo + calculoserie(n, i+1);
    }
    else {
        printf("%d!/%d", i, proxprimo);
        return calculo;
    }

}

int main()
{
    int n;

    scanf("%d", &n);

    printf("\n%.2lf", calculoserie(n, 1));

	return 0;
}
