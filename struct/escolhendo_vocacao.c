#include <stdio.h>

struct vocacao{
    int forca;
    int inteligencia;
    int destreza;
    int furtividade;
    int peso;
};

int main()
{
    struct vocacao rpg;

    scanf("%d %d %d %d %d", &rpg.forca, &rpg.inteligencia, &rpg.destreza,
        &rpg.furtividade, &rpg.peso);

    if(rpg.forca > 5 && rpg.inteligencia > 5 && rpg.destreza > 5
        && rpg.furtividade > 5 && rpg.peso < 5)
    {
        printf("Paladin");
    }
    else if(rpg.forca > 10 && rpg.inteligencia < 5 && rpg.destreza < 5
        && rpg.furtividade < 5 && rpg.peso > 5)
    {
        printf("Orc");
    }
    else if(rpg.forca > 5 && rpg.destreza > 5 && rpg.peso > 5)
    {
        printf("Knight");
    }
    else if(rpg.forca < 5 && rpg.inteligencia > 5 && rpg.furtividade > 5 && rpg.peso < 5)
    {
        printf("Mage");
    }

    return 0;
}
