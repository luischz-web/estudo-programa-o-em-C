#include <stdio.h>

int main() {

    int i;
    float n1, n2, media;

    for (i = 1; i <= 5; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        media = (n1 + n2) / 2.0f;

        printf("Media: %.2f\n", media);

        if (media >= 6.0f) {
            printf("Situacao: APROVADO\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }
    }

    return 0;
}