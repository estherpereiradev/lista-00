//Dado os tr�s lados de um tri�ngulo determinar o per�metro do mesmo. 

#include <stdio.h>
main(){
	
	float lado1, lado2, lado3, perimetro;
	
	printf("Insira o primeiro lado do tri�ngulo:\n");
	scanf("%f", &lado1);
	
	printf("Insira o segundo lado do tri�ngulo:\n");
	scanf("%f", &lado2);
	
	printf("Insira o terceiro lado do tri�ngulo:\n");
	scanf("%f", &lado3);
	
	perimetro = lado1 + lado2 + lado3;
	
	printf("O perimetro do tri�ngulo �:%f\n", perimetro);
}
