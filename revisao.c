#include <stdio.h>
#include <stdlib.h>

/*Exerc´ıcio 3. [Recurs˜ao] Escreva uma fun¸c˜ao recursiva para calcular
o valor de um n´umero inteiro de base
x elevada a um expoente inteiro y.*/

int calcularExpoente(int x, int y, int resultinho, int cont){
  if(y==0){
    if(cont == 0){
    return 1;
    }
    else return x;
  }//caso base
  else if(y>1){
    y--;
    cont++;
    x= x*resultinho;
    calcularExpoente(x,y, resultinho,cont);
  }
}//calcularExpoente

int main() {
  int x, y, resultinho,cont=0;

  printf("Digite o valor de x\n" );
  scanf("%d",&x);
  printf("Digite o valor de y\n" );
  scanf("%d",&y);
  resultinho=x;

  resultinho=calcularExpoente(x,y,resultinho,cont);
  printf("\nresultado: %d\n",resultinho );
  return 0;
}
