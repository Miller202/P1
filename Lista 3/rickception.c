#include <stdio.h>

int dispositivo(int n, int i, int k)
{
    if (i == k)
    {
        return n;
    }
    else
    {
        if (i % 2 == 0)
        {
            n = n + 3;
        }
        else{
            n = n + (n%5);
        }
    }
    return dispositivo(n, i + 1, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", dispositivo(n, 0, k));
    return 0;
}
