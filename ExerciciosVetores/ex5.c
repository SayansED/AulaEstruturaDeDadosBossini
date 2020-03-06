#include <stdio.h>

int main() {

    int i = 0, maior = 0, qtd = 0;
    double total;
    int v[30] = {15, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 8, 7, 6, 5, 4, 3, 2, 1, 0, 15, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    maior = v[1];

    for (i = 0; i < 30; i++) {
    	total = total + v[i];
    	qtd++;
    }
    printf("\nQuantidade: %d", qtd);
    printf("\nTotal: %.2f", total);
    printf("\nMedia: %.2f", (total / qtd));

    return 0;
}
