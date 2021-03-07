#include<stdio.h>
#include<stdlib.h>

/* Exercıcio 3. [Recursao] Escreva uma funcao recursiva
para calcular o valor de um numero inteiro de base
x elevada a um expoente inteiro y */

int CalculaBaseExpoente (int x, int y){
  if(y==0){
    return 1;
  }//if
  else {
    return (x* CalculaBaseExpoente(x,y-1));
  }//else

}//CalculaBaseExpoente

int main() {
int x,y, recursao;

//x
printf("Digite um valor inteiro da base:\n" );
scanf("%d", &x);

//y
printf("Digite um valor inteiro do expoente:\n" );
scanf("%d", &y);

recursao= CalculaBaseExpoente(x,y);

printf("Resultado de %d elevado a %d é : %d\n",x,y,recursao );




}//main
