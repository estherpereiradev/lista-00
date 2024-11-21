//Ler um número inteiro e exibir o seu sucessor.

#include<stdio.h>

main(){
	
	int num, suc;
	
	printf("Insira o número:\n");
	scanf("%d", &num);
	
	suc = num + 1;
	
	printf("O sucessor do número digitado é:%d\n", suc);
}
