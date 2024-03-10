#include <stdio.h>

int main (){
	
	int A;
	
	printf("Por favor, digite um numero:");
	scanf("%d", &A);
	
	if (A > 0){
		printf("O numero e positivo.");
	}
	else if (A == 0){
		printf("O numero nao e positivo nem negativo.");
	}
	else if (A < 0){
		printf("O numero e negativo.");
	}
	
	return 0;
}