#include <stdio.h> 

float delta(float A, float B, float C){
  return (B*B) - 4*A*C; 
}
float raizes1(float A, float B, float C){
  return (-B)/2*A, (-B)+((B*B) - 4*A*C)/2*A, (-B)-((B*B) - 4*A*C)/2*A;
}

int main() {
float A, B, C; 
printf ("Digite o valor de \"a\"\n:" ); 
scanf ("%f", &A); 
printf ("Digite o valor de \"b\"\n:" ); 
scanf ("%f", &B); 
printf ("Digite o valor de \"c\"\n:" ); 
scanf ("%f", &C); 

printf ("O valor de delta é: %.2f\n", (B*B) - 4*A*C); 
if ((B*B)- 4*A*C < 0) { 
printf ("Não há soluções reais!"); 
}
else { 
if ((B*B)- 4*A*C == 0){ 
(-B)/2*A; 
printf ("Há apenas uma solução: %.2f", (-B)/2*A); 
}
else { 
(-B)+((B*B) - 4*A*C)/2*A; 
(-B)-((B*B) - 4*A*C)/2*A; 
printf ("Há duas soluções reais! R1: %.2f e R2: %.2f", (-B)+((B*B) - 4*A*C)/2*A, (-B)-((B*B) - 4*A*C)/2*A); 
} 
}
return 0; 
} 