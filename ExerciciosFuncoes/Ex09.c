#include<stdio.h>

void ehVogal(char c){
	if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
		printf("Nao eh vogal: %c", c);
	else
		printf("eh vogal: %c", c);
}

int main() {
	char c;
	printf("Digite um caractere: \n");
	scanf("%c", &c);
	ehVogal(c);
	
	return 0;
}
