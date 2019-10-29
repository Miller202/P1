#include <stdio.h>

int natal(int i, float total, float arvore)
{
    int quantenf;
    float precoenf;

    if(i < 3)
    {
        scanf("%d %f", &quantenf, &precoenf);

        total += quantenf*precoenf;

        natal(i+1, total, arvore);
    }
    else{
        total += arvore;
        printf("%.2f\n%.2f\n", total, total/21);
    }
}

int main()
{
    float arvore;
    scanf("%f", &arvore);
    natal(0, 0, arvore);
	return 0;
}
