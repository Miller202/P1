#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100

typedef struct caracteristicas specs;

struct caracteristicas{
    int idade;
    char sexo;
    char olhos;
    char cabelos;
};

void loop(int i, specs sp[], int velho, int cont)
{
        scanf("%d", &sp[i].idade);

        if(sp[i].idade != -1)
        {
            scanf(" %c %c %c", &sp[i].sexo, &sp[i].cabelos, &sp[i].olhos);

            if(velho < sp[i].idade)
            {
                velho = sp[i].idade;
            }

            if((sp[i].sexo == 'f') && (sp[i].cabelos == 'l') && (sp[i].olhos == 'v'))
            {
                if(sp[i].idade >= 18 && sp[i].idade <= 35)
                {
                    cont += 1;
                }
            }

            loop(i+1, sp, velho, cont);
        }
        else{
            printf("Mais velho: %d\n", velho);
            double valor = (double)(cont)/i;
            printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%%\n", valor*100);
        }
}

int main()
{
    specs sp[MAX];
    loop(0, sp, 0, 0);
	return 0;
}
