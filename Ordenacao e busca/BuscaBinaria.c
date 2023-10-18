#include <stdio.h>

int buscaBinaria(int vet[], int baixo, int alto, int chave) {
    if (baixo > alto) {
        return -1; 
    }

    int meio = (baixo + alto) / 2;

    if (vet[meio] == chave) {
        return meio; 
    } else if (vet[meio] > chave) {
        return buscaBinaria(vet, baixo, meio - 1, chave); 
    } else {
        return buscaBinaria(vet, meio + 1, alto, chave); 
    }
}

int main() {
    int vet[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(vet) / sizeof(vet[0]);
    int chave = 7;

    int indice = buscaBinaria(vet, 0, n - 1, chave);

    if (indice != -1) {
        printf("A chave %d foi encontrada no índice %d.\n", chave, indice);
    } else {
        printf("A chave %d não foi encontrada no vetor.\n", chave);
    }

    return 0;
}
