#include <stdio.h>

void selectionSort(int vet[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (vet[j] < vet[minIndex]) {
                minIndex = j;
            }
        }
        temp = vet[i];
        vet[i] = vet[minIndex];
        vet[minIndex] = temp;
    }
}

int main() {
    int vet[] = {24, 34, 55, 11, 22, 31, 70};
    int n = sizeof(vet) / sizeof(vet[0]);
    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    selectionSort(vet, n);

    for (i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
