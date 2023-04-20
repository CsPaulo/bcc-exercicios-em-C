#include <locale.h>
#include <stdio.h>

void maiormenor (){
  int A, MAIOR, MENOR;
  int *pMAIOR, *pMENOR;
  pMAIOR = &MAIOR;
  pMENOR = &MENOR;
      
  printf("Digite o primeiro valor: ");
  scanf("%i", &A);
  MAIOR = A;
  MENOR = A;
  printf("Digite o segundo valor: ");
  scanf("%i", &A);
  if (A > MAIOR) {
    MAIOR = A;
  } else {
    MENOR = A;
  }
  printf("Digite o terceiro valor: ");
  scanf("%i", &A);
  if (A > MAIOR) {
    MAIOR = A;
  } else {
    if (A < MENOR) {
      MENOR = A;
    }
  }
  printf("Digite o quarto valor: ");
  scanf("%i", &A);
  if (A > MAIOR) {
    MAIOR = A;
  } else {
    if (A < MENOR) {
      MENOR = A;
    }
  }
  printf("Digite o quinto valor: ");
  scanf("%i", &A);
  if (A > MAIOR) {
    MAIOR = A;
  } else {
    if (A < MENOR) {
      MENOR = A;
    }
  }
  printf("O maior valor é: %d e o menor é: %d", *pMAIOR, *pMENOR);
}

int main() {
  maiormenor();
  return 0;
}

