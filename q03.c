//Dado o tamanho do raio de uma circunfer�ncia, calcular a �rea e o per�metro da mesma.

#include <stdio.h>
main(){
	
	float raio, area, perimetro;
	float pi = 3.14;
	
	printf("Insira o tamanho do raio:\n");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio; 
	area = (raio * raio) * pi;
	
	printf("A �rea da circunfer�ncia �:%f\nO per�metro da circunfer�ncia �:%f\n", area, perimetro);
	
}
