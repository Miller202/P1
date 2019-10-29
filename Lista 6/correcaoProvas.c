#include <stdio.h>

int Total(int i, int total, char string[], char string2[])
{
    if(i < 10)
    {
        if(string2[i] == string[i])
        {
            total+=1;
        }

        Total(i+1, total, string, string2);
    }
    else{
        return total;
    }
}

int nVezes(int i, int array[], int contagem, int n, int vezes)
{
    if(i > contagem)
    {
        return vezes;
    }

    if(array[i] == n)
    {
        vezes+=1;
    }

    nVezes(i+1, array, contagem, n, vezes);
}

int calculoTotal(int i, int array[], int contagem, int n, int soma)
{
    if(contagem < i)
    {
        return n;
    }

    int valor = array[i];
    int calculo = nVezes(0, array, contagem, valor, 0);

    if(valor != n && calculo > soma)
    {
        n = valor;
        soma = calculo;
    }

    calculoTotal(i+1, array, contagem, n, soma);
}

void aprovacao(int alunos, int aprovados, int array[], char string[])
{
    int n;
    scanf("%d\n", &n);

    if(n < 9999)
    {
        char string2[10];

        loop(0, string2);
        int pontuacao = Total(0, 0, string, string2);
        array[n-1] = pontuacao;

        if(pontuacao >= 6)
        {
            aprovados+=1;
        }

        printf("%d %.1f\n", n, (float)(pontuacao));

        aprovacao(n, aprovados, array, string);
    }
    else{
        double vetor = (aprovados*100)/(double)(alunos);
        int contagem = calculoTotal(0, array, (alunos-1), 0, 0);

        printf("%.1lf%\n", vetor);
        printf("%.1f\n", (float)(contagem));
    }
}

void loop(int i, char string[])
{
    if(i < 10)
    {
        scanf("%c", &string[i]);
        loop(i+1, string);
    }
}

int main()
{
    int array[100];
    char string[10];

    loop(0, string);

    aprovacao(0, 0, array, string);

    return 0;
}
