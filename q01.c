//Dado o tamanho da base e da altura de um ret�ngulo, calcular a sua �rea e o seu per�metro.

#include <stdio.h>
main(){
	
	float base, altura, area, perimetro;
	
	printf("Insira a base do ret�ngulo:\n");
	scanf("%f", &base);
	printf("Insira a altura do ret�ngulo:\n");
	scanf("%f", &altura);
	
	area = (base * altura/2;
	perimetro = ((base * 2) + (altura * 2));
	
	printf("A area do ret�ngulo �:%f.\nO per�metro do ret�ngulo �:%f\n", area, perimetro);
	
}
