#include<stdio.h>
int main() {
	int v[40] = {50, 255, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 150, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
	int j=0, i=0, continua=0, fim=40, aux=0;
	
	do{
		continua = 0;
		for(i=0; i<fim-1; i++){
			if(v[i] > v[i+1]){
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				continua = i;
			}
		}
		fim--;
	}while (continua != 0);
	
	for(j=0; j < 40; j++){
		printf("\n%d", v[j]);
	}
	return 0;
}
