#include <stdio.h>

void insertionSort(int vet[], int n) {
    int i, chave, j;
    for (i = 1; i < n; i++) {
        chave = vet[i];
        j = i - 1;

        while (j >= 0 && vet[j] > chave) {
            vet[j + 1] = vet[j];
            j = j - 1;
        }
        vet[j + 1] = chave;
    }
}

int main() {
    int vet[] = {24, 37, 15, 12, 27, 11, 88};
    int n = sizeof(vet) / sizeof(vet[0]);
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    insertionSort(vet, n);

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
