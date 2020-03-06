#include <stdio.h>

int main() {

    int i = 0, maior = 0;
    int v[10] = {15, 8, 7, 6, 55, 4, 3, 2, 1, 0};
    maior = v[0];

    for (i = 0; i < 10; i++) {
        if (v[i] >= maior) maior = v[i];
    }
    printf("\nMaior: %d", maior);

    return 0;
}
