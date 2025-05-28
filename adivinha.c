#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int palpite, numero = 0;

    srand(time(0));
    numero = rand() % 100 + 1;

    while (1) {
        printf("Insira um número entre 1 e 100: ");
        scanf("%d", &palpite);

        if (palpite == numero) {
            printf("Acertou!\n");
            break;
        }if (palpite < numero) {
            printf("Muito baixo!\n");
        } else {
            printf("Muito alto!\n");
        }
    }

    return 0;
}
