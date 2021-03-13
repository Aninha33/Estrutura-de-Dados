#include "filaDinamica.h"

void iniciaFila(FilaDinamica *fila){
  //inicio aponta pra nulo
  fila->inicio=NULL;
  //fim aponta para nulo
  fila->fim=NULL;
  //contador
  fila->tamanho=0;
}//iniciaFila

void imprimeFila(FilaDinamica *fila){
  PtrNoFila aux;
  printf("Fila = { " );

  for(aux = fila->inicio; aux != NULL; aux= aux->proximo){
    printf("%d ",aux->obj);
  }//for
  printf("} \n" );

}//imprimeFila

void enfileira(Objeto x, FilaDinamica *fila){
  PtrNoFila aux;
  aux = (PtrNoFila)malloc(sizeof(NoFila));
  aux->obj=x;

  //quando é a primeira inserção:
  if(estaVazia(fila)){
    //inicio e fim aponta para novo NoFila
    fila->inicio = aux;
    fila->fim = aux;
    aux->proximo= NULL;
  }//if
  else {
    aux->proximo=NULL;
    fila->fim->proximo=aux;
    fila->fim = aux;
  }//else
  //como sempre ta incrementando, otimização tamaravilhosa aprova
  fila->tamanho++;
}//enfileira

void desenfileira(FilaDinamica *fila, Objeto *x){
  PtrNoFila aux; //aloca memoria

  //se a fila não estiver vazia
  if(!estaVazia(fila)){
    aux = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    *x=aux->obj;

    free(aux);
    fila->tamanho--;
  }//if
  else printf("Eita, filinha ta cheia, cai fora brow \n" );

}//desenfileira

int estaVazia(FilaDinamica *fila){
  return(fila->tamanho == 0);
}//estaVazia

int tamanhoFila(FilaDinamica *fila){
  printf("Tamanho da filinha é de %d\n", fila->tamanho );
  return (fila->tamanho);
}//tamanhoFila

Objeto inicioFila(FilaDinamica *fila){
  return(fila->inicio->obj);
}//inicioFila

Objeto fimFila(FilaDinamica *fila){
  return(fila->fim->obj);
}//fimFila

void destruicao(FilaDinamica *fila, Objeto *x){
  do {
    desenfileira(fila, x);
  }while(fila->tamanho!=0);

}//destruicao

int main() {
  FilaDinamica f;
  Objeto obj, filinha;
  obj.chave=3;

  iniciaFila(&f);


  // desenfileira(&f);
  imprimeFila(&f);

  //inserir numerinhos na filinha
  for (int i = 0; i < 10; i++) {
    enfileira(obj, &f);
    obj.chave++;
  }//for

  imprimeFila(&f);
  tamanhoFila(&f);

  filinha=inicioFila(&f);
  printf("Primeiro elementinho da fila: %d \n",filinha.chave);
  filinha=fimFila(&f);
  printf("Ultimo elementinho da fila: %d \n", filinha.chave);


  //tirar numerinhos na filinha
  for (int i = 0; i < 5 ; i++) {
    desenfileira(&f, &obj);
    printf("Bye bye numero %d \n",obj.chave);
  }//for

  imprimeFila(&f);
  tamanhoFila(&f);

  filinha=inicioFila(&f);
  printf("Primeiro elementinho da fila: %d \n",filinha.chave);
  filinha=fimFila(&f);
  printf("Ultimo elementinho da fila: %d \n", filinha.chave);

  fimFila(&f);
  destruicao(&f, &obj);

  return 0;
}//main
