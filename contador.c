#include <stdio.h>

int main() {
    int num, i, positivos = 0, negativos = 0, zeros = 0;
	
	for (i = 1; i <= 10; ++i) {
    printf("Insira números: ");
    scanf("%d", &num);
    
    if(num > 0){
		positivos = positivos + 1;
	}if(num < 0){
		negativos = negativos + 1;		
	}if(num == 0)
		zeros = zeros + 1;
}
    printf("\nPositivos: %d", positivos);
     printf("\nNegativos: %d", negativos);
      printf("\nZeros: %d", zeros);

    return 0;
}

