#include <stdio.h>

#define MAX 44

typedef struct ambrosio onibus;

struct ambrosio{
    int numpassagem;
    int dia, mes, ano;
    char origem[50];
    char destino[50];
    int hora, min;
    int poltrona;
    int idade;
    char nome[50];
};

void imprimirPassageiro(int i, onibus bus[], float value)
{
    if(bus[i].numpassagem != -1)
    {
        if((bus[i].idade > value) && (bus[i].poltrona%2 == 0))
        {
            printf("%s", bus[i].nome);
        }
        imprimirPassageiro(i+1, bus, value);
    }
}

float media(int i, onibus bus[], float valor)
{
    if(bus[i].numpassagem != -1)
    {
        valor += bus[i].idade;
        media(i+1, bus, valor);
    }
    else{
        return (float)(valor)/i;
    }
}

void company(int i, onibus bus[])
{
    scanf("%d", &bus[i].numpassagem);

    if(bus[i].numpassagem != -1)
    {
        scanf("%d/%d/%d ", &bus[i].dia, &bus[i].mes, &bus[i].ano);

        fgets(bus[i].origem, 50, stdin);
        fgets(bus[i].destino, 50, stdin);

        scanf("%d:%d", &bus[i].hora, &bus[i].min);
        scanf("%d %d ", &bus[i].poltrona, &bus[i].idade);

        fgets(bus[i].nome, 50, stdin);

        company(i+1, bus);
    }
}

int main()
{
    onibus bus[MAX];
    company(0, bus);
    float value = media(0, bus, 0);
    imprimirPassageiro(0, bus, value);
    return 0;
}
