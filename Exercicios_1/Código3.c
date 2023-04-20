#include <stdio.h>

float caulcularmedia(float n1,float n2,float n3,float n4){
  float media =(n1+n2+n3+n4)/4;
  return media;
}

int main(){

float nota1, nota2, nota3, nota4, m;

printf("Insira as respectivas notas do aluno\n");
scanf("%f",&nota1); 
scanf("%f",&nota2);
scanf("%f",&nota3);
scanf("%f",&nota4);

 m = caulcularmedia(nota1, nota2, nota3, nota4);
printf("A media do aluno foi:%0.f\n", m);

if(m >=7){

    printf("Aprovado");
}else{

   printf ("Reprovado");
}
	return 0;
}