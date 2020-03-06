#include <stdio.h>

int main() {

    int i=0, j=0, x1=0, x2=0;
    int v[10] = {15, 8, 15, 6, 55, 4, 3, 2, 1, 0};
    int x[10];
    
    // ERRO
    for(i=0; i<10; i++){
    	x1 = v[i];
    	x2 = v[i+1];
    	if(x1 != x2){
    		x[i] = v[i];
		}
	}
	
	int cont=0;
	for(cont=0; cont<10; cont++){
		printf("\nVetor v =%d e Vetor x = %d", v[cont], x[cont]);
	}

    return 0;
}
