#include <stdio.h>

int fat(int n){
    if(n<=1)
    {
        return 1;
    }
    else{
        return n*fat(n-1);
    }
}

int controle(int n)
{
    scanf("%d", &n);
    if(n!=-1){
        printf("%d\n", fat(n));
        return controle(n);
    }
    else
    {
        return 0;
    }
}

int main() {
    int n;
    controle(n);
	return 0;
}
