#include <stdio.h>

int main(){
	
	float tarifa = 5.0, horas, total;
	
	printf("Insiria o número de horas que o veiculo ficou estacionado: ");
	scanf("%f", &horas);
		
	total = tarifa * horas;
	
	printf("Total a pagar: %.2f $", total);
	
return 0;
}
