#include <stdio.h>

void bubbleSort(int vet[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vet[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(vet) / sizeof(vet[0]);
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    bubbleSort(vet, n);

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
