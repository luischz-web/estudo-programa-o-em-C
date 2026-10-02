#include <stdio.h>

int main() {

    int valor1, valor2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
	printf("Digite o segundo valor : ");
    scanf("%d", &valor2);

    printf("Soma: %d\n", valor1 + valor2);
    printf("Subtracao: %d\n", valor1 - valor2);
    printf("Multiplicacao: %d\n", valor1 * valor2);

    if (valor2 != 0) {
        printf("Divisao inteira: %d\n", valor1 / valor2);
        printf("Resto da divisao: %d\n", valor1 % valor2);
    }

    return 0;
}