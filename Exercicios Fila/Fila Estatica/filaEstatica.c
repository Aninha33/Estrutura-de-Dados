#include "filaEstatica.h"

void iniciaFila(FilaEstatica *fila){
  fila->inicio = 0;
  fila->fim = -1;
  fila->tamanho = 0;
}//iniciaFila

bool estaVazia(FilaEstatica *fila){
  return(fila->tamanho == 0);
}//estaVazia

bool estaCheia(FilaEstatica *fila){
  return(fila->tamanho == MAXTAM);
}//estaCheia

int tamanhoFila(FilaEstatica *fila){
  printf("Tamanho da filinha é de %d\n", fila->tamanho );
  return(fila->tamanho);
}//tamanhoFila

int incrementaIndice(int i){
  return((i+1)%MAXTAM);
}//incrementaIndice

void enfileira(Objeto x, FilaEstatica *fila){
  if(estaCheia(fila) == false){
    //incrementamos o fim
    fila->fim = incrementaIndice(fila->fim);
    //atribuir o novo elemento na posicao que o fim ta indexando pra nós Q[fim]
    fila->array[fila->fim] = x;
    //incrementa a quantidade de elementos
    fila->tamanho++;
  }//if
  else printf("Vish Filinha cheiona, tente na proxima querido.\n");
}//enfileira

void imprimeFila(FilaEstatica *fila){
  printf("Fila = { " );
  int n = fila->tamanho;

  //começa no inicio, vai até o fim e incrementa o valor
  for (int i = 0; i <n ; i ++) {
    int indice = (fila->inicio + i) % MAXTAM;
    printf("%d, ", fila->array[indice]);
  }//for

  printf("}\n");
}//imprimeFila

Objeto desenfileira(FilaEstatica *fila){
  Objeto obj;
  //Se a fila não estiver vazia:
  if(!estaVazia(fila)){
  //Salvar quem está no inicio, na variavel temporaria Q[inicio] (temp)
    obj = fila->array[fila->inicio];
  //incrementa o inicio
    fila->inicio = incrementaIndice(fila->inicio);
  //decrementar a quantidade de elementos (final)
    fila->tamanho--;
  }//if
  else{
    printf("Filinha já ta vazia. Adicione umas parada ai brow\n" );
  }//else
  //retornar elemento
  return(obj);
}//desenfileira

Objeto inicioFila(FilaEstatica *fila){
  // printf("Primeiro elementinho da fila: %d \n",fila->inicio );
  return(fila->array[fila->inicio]);
}//inicioFila

Objeto fimFila(FilaEstatica *fila){
  // printf("Ultimo elementinho da fila: %d \n",fila->fim );
  return(fila->array[fila->fim]);
}//fimFila


int main() {
  FilaEstatica f;
  Objeto obj, filinha;

  obj.chave=13;
  iniciaFila(&f);
  estaVazia(&f);
  //inserindo itens na fila
  for (int i = 0; i < MAXTAM; i++) {
    enfileira(obj, &f);
    obj.chave++;
  }//for

  imprimeFila(&f);
  tamanhoFila(&f);
  filinha=inicioFila(&f);
  printf("Primeiro elementinho da fila: %d \n",filinha.chave);
  filinha=fimFila(&f);
  printf("Ultimo elementinho da fila: %d \n", filinha.chave);

  //tirar intens da fila
  for (int i = 0; i < 3; i++) {
    desenfileira(&f);
  }//for desempilha

  imprimeFila(&f);
  tamanhoFila(&f);

  filinha=inicioFila(&f);
  printf("Primeiro elementinho da fila: %d \n",filinha.chave);
  filinha=fimFila(&f);
  printf("Ultimo elementinho da fila: %d \n", filinha.chave);

  return 0;
}//main
