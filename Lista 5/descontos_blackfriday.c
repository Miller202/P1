#include <stdio.h>

int loop(int i, int quantdesconto)
{
    float antes, depois, desconto;

    if(i < 5)
    {
        scanf("%f %f", &antes, &depois);

        desconto = antes - (antes * 20/100);

        if(depois <= desconto)
        {
            quantdesconto+=1;
        }

        loop(i+1, quantdesconto);
    }
    else{
        printf("%d", quantdesconto);
    }
}

int main()
{
    loop(0, 0);
	return 0;
}
