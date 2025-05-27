#include <stdio.h>

int main(){
	
	int v1, v2, v3;
	
	printf("Insira sua valor 1: ");
	scanf("%d", &v1);
	printf("Insira sua valor 2: ");
	scanf("%d", &v2);
	printf("Insira sua valor 3: ");
	scanf("%d", &v3);
	
	if(v1 == v3 && v1 == v3){ //v3 iguais
		printf("\n%d", v3);
		printf("\n%d", v1);
		printf("\n%d", v2);
	}if (v1 => v2 && v1 > v3){ //v1 menor
		printf("\n%d", v3);
		printf("\n%d", v1);
		printf("\n%d", v2);
	}if(v1 == v2 && v1 < v3){ //v2 menor
		printf("\n%d", v1);
		printf("\n%d", v2);
		printf("\n%d", v3);
	}if(v1 == v3 && v1 > v2);
		printf("\n%d", v2);
		printf("\n%d", v1);
		printf("\n%d", v3);
	
	
return 0;
}
