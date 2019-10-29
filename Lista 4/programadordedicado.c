#include <stdio.h>
#include <stdlib.h>

int programadordedicado(int mediapr, int mediali, int i, int conta, int armazena)
{
    int qprogramas, qlinhas;
    if(i < 7)
    {
        scanf("%d %d", &qprogramas, &qlinhas);

        if(qprogramas >= 5)
        {
            mediapr+=1;
        }
        if(qlinhas >= 100)
        {
            mediali+=1;
        }

        if(qlinhas > armazena)
        {
            armazena = qlinhas;
            conta = i;
        }

        return programadordedicado(mediapr, mediali, i+1, conta, armazena);
    }
    else{
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", mediapr);
        printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", mediali);

        if(conta == 0)
        {
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
        }
        else if(conta == 1)
        {
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
        }
        else if(conta == 2)
        {
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
        }
        else if(conta == 3)
        {
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
        }
        else if(conta == 4)
        {
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
        }
        else if(conta == 5)
        {
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
        }
        else if(conta == 6)
        {
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }
        else{
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
        }

    }
}

int main()
{
    int i=0;
    int mediapr = 0, mediali = 0;
    int conta=0, armazena=0;
    programadordedicado(mediapr, mediali, i, conta, armazena);
    return 0;
}
