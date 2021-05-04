#include <stdio.h>

void main(){
	char inicial;
	int idade;
	printf("Entre com a sua idade e dua inicial:\n");
	scanf("%d %c", &idade, &inicial);
	printf("Você tem %d anos e seu nome começa com %c\n", idade, inicial);
}
