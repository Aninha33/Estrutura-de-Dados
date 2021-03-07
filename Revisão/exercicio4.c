#include<stdio.h>
#include<stdlib.h>

/* Exercıcio 4. [Alocacao Dinamica] Faca um programa que leia um valor N e crie dinamicamente um
vetor com essa quantidade de elementos. Em seguida, passe esse vetor para uma funcao que vai ler os
elementos desse vetor. Depois, no programa principal, imprima os valores do vetor preenchido. Alem disso,
antes de finalizar o programa, lembre-se de liberar a area de memoria alocada para armazenar os valores do
vetor. */

void PreencheVetor (int *vetorzinho, int n){
  for (int i = 0; i < n ; i++) {
    vetorzinho[i]=i;
  }//for

}//PreencheVetor


int main() {
  int *vetorzinho, n;

  printf("Digite o tamanho do vetor: \n");
  scanf("%d",&n );

  vetorzinho= (int*)malloc(n*sizeof(int));

  PreencheVetor(vetorzinho, n);

  for (int i = 0; i < n; i++) {
    printf("vetorzinho [%d] : [%d] \n", i+1, vetorzinho[i] );
  }

  free(vetorzinho);
}//main
