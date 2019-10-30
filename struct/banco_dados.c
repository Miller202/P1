#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct banco bank;

struct banco{
    int idade;
    char nome[50];
    char sexo;
    char estadocivil;
    int quantamigos;
    int quantfotos;
};

void imprimirStruct(int i, int n, bank b[])
{
    if(i < n)
    {
        scanf("%d ", &b[i].idade);
        fgets(b[i].nome, 50, stdin);
        scanf("%c %c %d %d", &b[i].sexo, &b[i].estadocivil, &b[i].quantamigos, &b[i].quantfotos);

        printf("Idade: %d\nNome: %sSexo: %c\nEstado Civil: %c\nNumero de amigos: %d\nNumero de fotos: %d\n\n",
        b[i].idade, b[i].nome, b[i].sexo, b[i].estadocivil, b[i].quantamigos, b[i].quantfotos);

        imprimirStruct(i+1, n, b);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    bank b[n];
    imprimirStruct(0, n, b);
	return 0;
}
