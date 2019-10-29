#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverter(int i, int tamanho, int letra, char string1[], char string2[])
{
    if(i == letra)
    {
        string2[letra] = '\0';
    }
    else if(i < letra)
    {
        string2[i] = string1[tamanho];
        inverter(i+1, tamanho-1, letra, string1, string2);
    }
}

int main()
{
    char string1[255], string2[255];
    scanf("%s", &string1);

    int tamanho = (strlen(string1) - 1);
    int letra =  strlen(string1);

    inverter(0, tamanho, letra, string1, string2);
    printf("%s\n", string2);

	return 0;
}
