#include <stdio.h>
int main()
{
    int n1,n2,n3;
    double media;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    media = (double)(n1+n2+n3)/3;
    if(media>=70 && media<=100)
    {
        printf("A media do aluno foi %.2lf e ele foi APROVADO\n", media);
    }
    else if(media>=0 && media<=40)
    {
        printf("A media do aluno foi %.2lf e ele foi REPROVADO\n", media);
    }
    else if(media>40 && media<70)
    {
        printf("A media do aluno foi %.2lf e ele foi FINAL\n", media);
    }
    else
    {
        printf("Media invalida\n");
    }

    return 0;
}
