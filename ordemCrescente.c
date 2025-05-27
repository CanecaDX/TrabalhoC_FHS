#include <stdio.h>

int main(){
	
	int v1, v2, v3;
	
	printf("Insira sua valor 1: ");
	scanf("%d", &v1);
	printf("Insira sua valor 2: ");
	scanf("%d", &v2);
	printf("Insira sua valor 3: ");
	scanf("%d", &v3);
	
	if(v1 == v3 && v1 == v3){ // ok iguais
		printf("\n%d", v3);
		printf("\n%d", v1);
		printf("\n%d", v2);
	}if (v1 >= v2 && v1 > v3){ // ok
		printf("\n%d", v3);
		printf("\n%d", v1);
		printf("\n%d", v2);
	}if(v1 == v2 && v1 < v3){ // ok
		printf("\n%d", v1); //iguais
		printf("\n%d", v2); //iguais
		printf("\n%d", v3); //maior
	}if(v1 == v3 && v1 > v2){; // ok
		printf("\n%d", v2);
		printf("\n%d", v1);
		printf("\n%d", v3);
	}if(v1 >= v3 && v1 > v2){; // ok
		printf("\n%d", v2);
		printf("\n%d", v3);
		printf("\n%d", v1);
	}
	
return 0;
}
