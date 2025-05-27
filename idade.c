#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Insira sua idadade: ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Emtrada permitida!");
	}else
		printf("Entrada proibida!");
	
	
return 0;
}
