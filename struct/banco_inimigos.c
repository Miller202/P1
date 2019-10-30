#include <stdio.h>

typedef struct inimigos monstros;

struct inimigos{
  char nome[20];
  int id;
  int level;
  int vida;
  int ataque;
  int defesa;
};

void imprimirStruct(int i, int x, monstros m[])
{
    if(i < x)
    {
        printf("Nome: %s\nID: %d\nLevel: %d\nVida: %d\nAtaque: %d\nDefesa: %d\n", m[i].nome, m[i].id,
        m[i].level, m[i].vida, m[i].ataque, m[i].defesa);

        imprimirStruct(i+1, x, m);
    }
}

void lerStruct(int i, int x, monstros m[])
{
    if(i < x)
    {
        scanf("%[^\n]%d%d%d%d%d", m[i].nome, &m[i].id, &m[i].level,
                &m[i].vida, &m[i].ataque, &m[i].defesa);

        getchar();

        lerStruct(i+1, x, m);
    }
}

int main()
{
    int x;
    scanf("%d ", &x);
    monstros m[x];
    lerStruct(0, x, m);
    imprimirStruct(0, x, m);
	return 0;
}
