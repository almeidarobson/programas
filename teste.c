#include<stdio.h>

void soma();

int main() {

	int option = 0;

	do {
		printf("Escolha o exercício:\n"
				"1 - Soma de dois numeros\n"
				"100 - sair\n"

				"> ");

		scanf("%d", &option);

		switch(option) {
			case 1:
				soma();
				break;
			default:
				continue; 
		}
	} while (option == 100);

	return 0;
}


void soma() {
	double a, b;
	printf("Soma de dois números:\nDigite dois numero a serem somados\n> ");
	scanf("%lf %lf", &a, &b);

	double sum = a + b;
	printf("Total = %lf\n", sum);
	return;
}
