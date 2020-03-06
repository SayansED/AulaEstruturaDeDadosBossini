#include<stdio.h>

void mesDiferent(int num){
	if(num > 4 || num < 1)
		printf("Números invalidos");
	else {
		if(num == 1)
			printf("%d: Janeiro", num);
		else if(num == 2)
			printf("%d: Fevereiro", num);
		else
			printf("%d: Marco", num);
	}
}

int main() {
	int num = 0;
	printf("Digite 1, 2 ou 3 - Que representara os meses do primeiro trimestre\n");
	scanf("%d", &num);
	mesDiferent(num);
	return 0;
}
