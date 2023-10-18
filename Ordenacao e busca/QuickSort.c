#include <stdio.h>

int partition(int vet[], int baixo, int alto) {
    int pivot = vet[baixo];
    int i = baixo + 1;
    int j = alto;

    while (1) {
        while (i <= j && vet[i] <= pivot)
            i++;

        while (vet[j] >= pivot && j >= i)
            j--;

        if (i <= j) {
            int temp = vet[i];
            vet[i] = vet[j];
            vet[j] = temp;
        } else
            break;
    }

    int temp = vet[baixo];
    vet[baixo] = vet[j];
    vet[j] = temp;

    return j;
}

void quickSort(int vet[], int baixo, int alto) {
    if (baixo < alto) {
        int pivotIndex = partition(vet, baixo, alto);

        quickSort(vet, baixo, pivotIndex - 1);
        quickSort(vet, pivotIndex + 1, alto);
    }
}

int main() {
    int vet[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(vet) / sizeof(vet[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    quickSort(vet, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
