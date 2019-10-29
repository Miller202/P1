#include <stdio.h>

int muralha(int n, int i, int moedas, float x, float y, char aux)
{
    char caractere;

    if(i < n)
    {
        scanf(" %c", &caractere);

        if(caractere == 'D')
        {
            x+=1;

            if(x - y == 1)
            {
                if (aux == 'c')
                {
                    moedas+=1;
                }

                aux = 'd';
            }

        }

        else if(caractere == 'C')
        {
            y+=1;

            if(y - x == 1)
            {
                if(aux == 'd')
                {
                    moedas+=1;
                }

                aux = 'c';
            }

        }

        return muralha(n, i+1, moedas, x, y, aux);
    }

    else{
        printf("%d\n", moedas);
    }

}

int main()
{
    int n, i = 0, moedas = 0;
    float x = 0, y = 0;
    scanf("%d", &n);
    muralha(n, i, moedas, x, y, 'm');
    return 0;
}
