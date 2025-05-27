#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	if(numero % 2){
		printf("O número é impar!");
	}else
		printf("O número é par!");
	
	
return 0;
}
