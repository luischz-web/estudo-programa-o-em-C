#include <stdio.h>

    int main() {
        int numero1;


        printf("Digite um numero: ");
         scanf("%d", &numero1);
        printf("A tabuada do numero %d é:\n", numero1);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero1, i, numero1 * i);
        }
    }