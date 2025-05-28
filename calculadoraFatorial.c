#include <stdio.h>

int main() {
    int n, i;
    int fatorial = 1;

    printf("Insira um número inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial não definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fatorial *= i;
        }
        printf("Fatorial de %d é: %d", n, fatorial);
    }

    return 0;
}
