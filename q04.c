//Dado os três lados de um triângulo determinar o perímetro do mesmo. 

#include <stdio.h>
main(){
	
	float lado1, lado2, lado3, perimetro;
	
	printf("Insira o primeiro lado do triângulo:\n");
	scanf("%f", &lado1);
	
	printf("Insira o segundo lado do triângulo:\n");
	scanf("%f", &lado2);
	
	printf("Insira o terceiro lado do triângulo:\n");
	scanf("%f", &lado3);
	
	perimetro = lado1 + lado2 + lado3;
	
	printf("O perimetro do triângulo é:%f\n", perimetro);
}
