#include <stdio.h>

void main() {

	float av1, av2, media;

	printf("Informe a nota da AV1: \n");
	scanf(" %f", &av1);

	printf("Informe a nota da AV2: \n");
	scanf(" %f", &av2);

	media = (av1 + av2)/2.0;

	printf("Sua média é: %f.\n", media);
}
