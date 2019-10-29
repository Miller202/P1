#include <stdio.h>
int main() {
    int valor;
	scanf("%d", &valor);
	tabuada(valor,1);
	return 0;
}

int tabuada(int valor, int i) {

	printf("%d X %d = %d\n", valor, i, valor*i);

	if(i == 9) {
		return valor * i;
	} else{
		return tabuada(valor, i+1);
	}

}
