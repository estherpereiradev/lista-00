//Ler um n�mero inteiro e exibir o seu sucessor.

#include<stdio.h>

main(){
	
	int num, suc;
	
	printf("Insira o n�mero:\n");
	scanf("%d", &num);
	
	suc = num + 1;
	
	printf("O sucessor do n�mero digitado �:%d\n", suc);
}
