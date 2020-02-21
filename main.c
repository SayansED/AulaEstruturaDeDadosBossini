#include<stdio.h>
int main(){
	printf("Hello Word");

	char op;
	int operando1, operando2;

	printf("Qual operação realizar?\n");
	scanf("%c", &op);
	printf("Qual o primeiro operando?\n");
	scanf("%d", &operando1);
	printf("Qual o segundo operando?\n");
	scanf("%d", &operando2);
	switch (op)
	{
	case '+':
	printf("%d + %d = %d\n", operando1, operando2, operando1 + operando2);
		break;
	}
	return 0;
}