#include <stdio.h>

float calcularsoma(n1, n2){
  return n1 + n2;
}
float calcularsubtracao(n1, n2){
  return n1 - n2;
}
float calcularmulti(n1, n2){
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
    
  
    printf( "A soma é: %0.1f\n", calcularsoma(num1, num2) );
    printf( "A subtracao é: %0.1f\n", calcularsubtracao(num1, num2) );
    printf( "O produto é: %0.1f \n", calcularmulti(num1, num2) );
    printf( "A divisão é: %0.1f \n", calculardiv(num1, num2) );

    return 0;
}