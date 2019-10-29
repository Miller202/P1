#include <stdio.h>

int verificaTocas(int i, int n, int array[])
{
    if(i >= n)
    {
        return -1;
    }

    else if(array[i] != -1)
    {
        return i;
    }

    verificaTocas(i+1, n, array);
}

void quantasTocas(int i, int j, int n, int array[], int ligacao, int numTocas)
{
    ligacao = array[j];

    if(ligacao != -1)
    {
        array[j] = -1;
    	j = ligacao;
    }
    else{
        numTocas+=1;

        int verifica = verificaTocas(0, n, array);

        if(verifica != -1)
        {
            j = verifica;
        }
        else{
            printf("%d\n", numTocas);
            return;
        }
    }

    quantasTocas(i+1, j, n, array, ligacao, numTocas);
}

void lerArray(int i, int n, int array[])
{
    if(i < n)
    {
        scanf("%d", &array[i]);
        lerArray(i+1, n, array);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    lerArray(0, n, array);
    quantasTocas(0, 0, n, array, 0, 0);
	return 0;
}
