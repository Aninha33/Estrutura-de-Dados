#include "pilhaEstatica.h"

//uhuu minha parte agora:


void iniciaPilha(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  pilha->topo=0;
}//iniciaPilha

bool estaVazia(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  return(pilha->topo == 0);
}//estaVazia

bool estaCheia(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  return(pilha->topo == MAXTAM);
}//estaCheia

void empilha(Objeto item, pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  if(estaCheia(pilha)==false){
    pilha->array[pilha->topo] = item;
    pilha->topo++;
  }//if
  else printf("Pilhinha está cheia, volte depois! \n" );
}//empilha

void desempilha(Objeto *item, pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  if(estaVazia(pilha)==false){
    *item= pilha->array[pilha->topo-1];
    pilha->topo--;
  }//if
  else printf("Pilhinha está vazia, adicione itens! \n" );
}//desempilha

int tamanhoPilha(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  printf("Tamanho da pilhinha é de %d\n", pilha->topo );
  return(pilha->topo);
}//tamanhoPilha

Objeto topo(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  return(pilha->array[pilha->topo-1]);
}//topo

void imprimePilha(pilhaEstatica *pilha) {
  // adicione seu codigo aqui
  printf("Pilha = { " );
  for (int i = 0; i < pilha->topo; i++) {
    printf("%d, ", pilha->array[i]);
  }//for
  printf("}\n");
}//imprimePilha
