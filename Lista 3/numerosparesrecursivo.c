#include <stdio.h>

int ContaDigitosPares(int n, int qpar){
    if(n>0){
       if((n%2) == 0)
       {
           qpar += 1;
       }
       return ContaDigitosPares(n/10, qpar);
    }
    else{
        return qpar;
    }
}

int main()
{
    int n, qpar=0;
    scanf("%d", &n);
    printf("%d", ContaDigitosPares(n, qpar));
    return 0;
}
