#include <stdio.h>

float calcularsoma(float n1,float n2){
  return n1 + n2;
}
float calcularsubtracao(float n1,float n2){
  return n1 - n2;
}
float calcularmulti(float n1,float n2){
  return n1 * n2;;
}
float calculardiv(float n1,float n2){
  return n1 / n2;
}

int main(){
    float num1, num2;

    printf("Calculadora FazTudo\n");
    printf("Digite os 2 numeros a serem processados: ");
    scanf("%f%f", &num1, &num2);
    
    float *ponteiro1, *ponteiro2;
    ponteiro1 = &num1;
    ponteiro2 = &num2;
  
    printf( "A soma é: %0.1f\n", calcularsoma(*ponteiro1, *ponteiro2) );
    printf( "A subtracao é: %0.1f\n", calcularsubtracao(*ponteiro1, *ponteiro2) );
    printf( "O produto é: %0.1f \n", calcularmulti(*ponteiro1, *ponteiro2) );
    printf( "A divisão é: %0.1f \n", calculardiv(*ponteiro1, *ponteiro2) );

    return 0;
}