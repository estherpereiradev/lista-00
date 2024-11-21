//Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.

#include <stdio.h>
main(){
	
	float lado, area, perimetro;
	
	printf("Insira o lado do quadrado:\n");
	scanf("%f", &lado);
	
	area = lado * lado;
	perimetro = lado * 4;
	
	printf("A area do quadrado é:%f\nO perímetro é:%f\n", area, perimetro);
	
}
