//Dado o tamanho da base e da altura de um retângulo, calcular a sua área e o seu perímetro.

#include <stdio.h>
main(){
	
	float base, altura, area, perimetro;
	
	printf("Insira a base do retângulo:\n");
	scanf("%f", &base);
	printf("Insira a altura do retângulo:\n");
	scanf("%f", &altura);
	
	area = (base * altura/2;
	perimetro = ((base * 2) + (altura * 2));
	
	printf("A area do retângulo é:%f.\nO perímetro do retângulo é:%f\n", area, perimetro);
	
}
