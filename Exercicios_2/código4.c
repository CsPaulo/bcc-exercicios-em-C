#include <stdio.h> 

float delta(float A, float B, float C){
  return (B*B) - 4*A*C; 
}
float raizes1(float A, float B, float C){
  return (-B)/2*A, (-B)+((B*B) - 4*A*C)/2*A, (-B)-((B*B) - 4*A*C)/2*A;
}

int main() {
float A, B, C; 
printf ("Digite o valor de \"a\":" ); 
scanf ("%f", &A); 
printf ("Digite o valor de \"b\":" ); 
scanf ("%f", &B); 
printf ("Digite o valor de \"c\":" ); 
scanf ("%f", &C); 

float *pA, *pB, *pC;
pA = &A;
pB = &B;
pC = &C;
printf ("O valor de delta é: %.2f\n", (*pB**pB) - 4**pA**pC); 
if ((*pB**pB)- 4**pA**pC < 0) { 
printf ("Não há soluções reais!"); 
}
else { 
if ((*pB**pB)- 4**pA**pC == 0){ 
(-*pB)/2**pA; 
printf ("Há apenas uma solução: %.2f", (-*pB)/2**pA); 
}
else { 
(-*pB)+((*pB**pB) - 4**pA**pC)/2**pA; 
(-*pB)-((*pB**pB) - 4**pA**pC)/2**pA; 
printf ("Há duas soluções reais! R1: %.2f e R2: %.2f", (-*pB)+((*pB**pB) - 4**pA**pC)/2**pA, (-*pB)-((*pB**pB) - 4**pA**pC)/2**pA); 
} 
}
return 0; 
} 