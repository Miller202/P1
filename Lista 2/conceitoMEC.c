#include <stdio.h>
int main()
{
    int qlivros, qalunos;
    scanf("%d", &qlivros);
    scanf("%d", &qalunos);
    if(qalunos/qlivros <= 8/1)
    {
        printf("A");
    }
    else if(qalunos/qlivros >= 9/1 && qalunos/qlivros <= 12/1)
    {
        printf("B");
    }
    else if(qalunos/qlivros >= 13/1 && qalunos/qlivros <= 18/1)
    {
        printf("C");
    }
    else if(qalunos/qlivros > 18/1)
    {
        printf("D");
    }
    return 0;
}
