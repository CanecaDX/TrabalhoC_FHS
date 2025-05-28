#include <stdio.h>

int main() {
    float horas, horasExtras;
    float salario;

    printf("Insira o numero de horas trabalhadas: ");
    scanf("%f", &horas);
	
	if(horas <= 40){
		salario = horas * 20;
	    printf("Salário final: %.2f", salario);
	}if(horas > 40){
		horasExtras = horas - 40;
		salario = (40 * 20) + horasExtras * 30;
		printf("Salário final: %.2f", salario);
	}


    return 0;
}
