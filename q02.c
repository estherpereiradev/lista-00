//Dado o tamanho do lado de um quadrado, calcular a �rea e o per�metro do mesmo.

#include <stdio.h>
main(){
	
	float lado, area, perimetro;
	
	printf("Insira o lado do quadrado:\n");
	scanf("%f", &lado);
	
	area = lado * lado;
	perimetro = lado * 4;
	
	printf("A area do quadrado �:%f\nO per�metro �:%f\n", area, perimetro);
	
}
