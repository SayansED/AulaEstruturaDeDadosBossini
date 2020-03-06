//10
#include <stdio.h>

double  calcula_media (int v[], int n){
    double soma = 0;
    int i = 0;
    for (i=0; i<n; i++) {
        soma += v[i];
    }
    return soma / n;
}

int main() {
    int v[4] = {10, 20, 30, 40};
    double media = calcula_media(v, 4);
    printf ("%.2f", media);
    return 0;
}
