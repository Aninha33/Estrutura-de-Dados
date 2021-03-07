#include<stdio.h>
#include<stdlib.h>


/*Exercıcio 1. [Ponteiros] Um ponteiro pode ser usado para dizer a uma funcao onde ela deve depositar
o resultado de seus calculos. Escreva uma funcao que converta uma quantidade de minutos na notacao
horas/minutos. A funcao recebe como parametro:
• um numero inteiro (totalMinutos); e
• os enderecos de duas variaveis inteiras, horas e minutos.
A funcao deve entao atribuir valores as variaveis passadas por referencia, de modo que os valores
atribuıdos respeitem as seguintes condicoes:
minutos < 60
60 ∗ horas + minutos = totalMinutos
Escreva tambem a funcao principal (main) que use a funcao desenvolvida */


void ConverteHoras(int *totalMinutos, int *horas, int *minutinhos){

    *totalMinutos =  *horas * 60 + *minutinhos;

}//ConverteHoras

//main
int main() {
  int totalMinutos, horas, minutinhos;

  printf("Digite as horas: ");
  scanf("%d",&horas);
  printf("Digite os minutos: ");
  scanf("%d",&minutinhos);

  ConverteHoras(&totalMinutos, &horas, &minutinhos);
  printf("Total de minutos é %d\n",totalMinutos);

  return 0;
}//main
