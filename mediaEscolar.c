#include <stdio.h>

int main(){
	
	float n1, n2, n3, media;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Insira a segunda nota: ");
	scanf("%f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	if(media >= 7){
		printf("Aprovado! %.1f", media);
	}else if (media < 5){
		printf("Reprovado! %.1f", media);
	}else
		printf("Recuperacao! %.1f", media);
		
	
	
return 0;
}
