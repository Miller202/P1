#include <stdio.h>

int verificatriangulo(int n, int i)
{
    if((i*(i+1)*(i+2)) < n)
    {
        return verificatriangulo(n, i+1);
    }
    else{
        if(i*(i+1)*(i+2) == n)
        {
            printf("%d * %d * %d = %d\nVerdadeiro\n", i, i+1, i+2, n);
        }
        else{
            printf("Falso\n");
        }
    }
}

int main() {

  int n, i=1;

  scanf("%d",&n);

  verificatriangulo(n, i);

  return 0;
}
