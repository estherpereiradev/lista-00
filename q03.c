//Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.

#include <stdio.h>
main(){
	
	float raio, area, perimetro;
	float pi = 3.14;
	
	printf("Insira o tamanho do raio:\n");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio; 
	area = (raio * raio) * pi;
	
	printf("A área da circunferência é:%f\nO perímetro da circunferência é:%f\n", area, perimetro);
	
}
