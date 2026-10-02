#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    int maior = 0;

    printf("Digite cinco notas: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    if (n1 <= 6) {
        maior++;
    }
    if (n2 <= 6) {
        maior++;
    }
    if (n3 <= 6) {
        maior++;
    }
    if (n4 <= 6) {
        maior++;
    }
    if (n5 <= 6) {
        maior++;
    }
    printf("Quantidade de notas menores ou iguais a 6: %d\n", maior);
    return 0;
}