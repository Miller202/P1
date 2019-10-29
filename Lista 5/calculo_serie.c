#include <stdio.h>

double serie(int i, int n, double n1, double n2, double n3)
{
    double soma;

    if(i < n)
    {
        if(i == 0)
        {
            soma = 1;
        }
        else{
            if(i%2!=0)
            {
                soma = n1/n2;
                n1*=2;
                n2+=3;
            }
            else{
                soma = n3/n1;
                n1*=2;
                n3+=2;
            }
        }
        return soma + serie(i+1, n, n1, n2, n3);
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    double soma;
    scanf("%d", &n);
    soma = serie(0, n, 2, 3, 3);
    printf("S: %.2lf\n", soma);
    return 0;
}
