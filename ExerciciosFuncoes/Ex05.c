#include<stdio.h>

void numbersDiferent(double n1, double n2){
	if(n1 != n2)
		printf("N�meros diferentes");
	else
		printf("N�meros iguais");
}

int main() {
	double n1, n2;
	printf("Digite dois numeros");
	scanf("%f%f", &n1,&n2);
	numbersDiferent(n1, n2);
	return 0;
}
