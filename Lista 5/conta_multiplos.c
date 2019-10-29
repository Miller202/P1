#include <stdio.h>

int multiplos(int i, int mult, int a, int b)
{
    if(i < 50)
    {
        if(i%a == 0 && i%b == 0)
        {
            mult+=1;
        }

        multiplos(i+1, mult, a, b);
    }
    else{
        printf("%d", mult);
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    multiplos(1, 0, a, b);
	return 0;
}
