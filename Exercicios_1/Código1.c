#include <stdio.h>


int SomaDivisores(int n){
 int i = 1, soma = 0;
 printf("\tdivisores de %d: ", n);
 while( i < n ){ 
 if (n % i == 0){ 
 soma += i;
 printf("%d, ", i );
 }
 i++;
 }

 return soma;
}
int main(){
 int numero, i;

 for(i = 0; i < 5; i++){
 printf("digite o %d número: ", i+1);
 scanf("%d", &numero);
 printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));
 }
 return 0;
}
