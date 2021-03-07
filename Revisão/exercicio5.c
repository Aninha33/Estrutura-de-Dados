#include<stdio.h>
#include<stdlib.h>

/* Exercıcio 5. [Structs, Ponteiros] Defina um tipo abstrato de dados que ira representar bandas de musica.
Essa estrutura deve ter
o nome da banda, que
tipo de musica ela toca, o
numero de integrantes, e em que
posicao do ranking essa banda esta dentre as suas 5 bandas favoritas.*/

typedef struct {
  char nomeBanda[50];
  char tipoMusica[50];
  int numeroIntegrantes;
  int ranking;
}Banda;


/* a) Crie uma funcao para preencher as 5 estruturas de bandas
criadas no exemplo passado; */
void PreencheBanda(Banda *bandas, int b){
  for (int i = 0; i < b; i++) {
    //nome da banda
    printf("Digite o nome da banda %d\n", i+1 );
    scanf("%s[^\n]",&bandas[i].nomeBanda );
    fflush(stdin);

    //tipo de musica
    printf("Digite o tipo de musica da banda %d\n",i+1 );
    scanf("%s[^\n]",&bandas[i].tipoMusica );
    fflush(stdin);

    //numero de integrantes
    printf("Digite o numero de integrantes da banda %d\n",i+1 );
    scanf("%d[^\n]",&bandas[i].numeroIntegrantes );
    fflush(stdin);

    //posicao do ranking
    printf("Digite a posição de ranking da banda %d dentre as suas 5 favoritas \n",i+1 );
    scanf("%d[^\n]",&bandas[i].ranking );
    fflush(stdin);

  }//for
}//PreencheBanda

/*b) Apos criar e preencher, exiba todas as informacoes das bandas/estruturas.
Nao se esqueca de usar o operador → para preencher os membros das structs;*/
void ExibirBanda(Banda *bandas, int b){
  for (int i = 0; i < b; i++) {
    printf("Nome da banda %d: %s\n",i+1, bandas[i].nomeBanda);
    printf("Tipo de musica da banda %d: %s\n",i+1, bandas[i].tipoMusica);
    printf("Numero de integrantes da banda %d: %d\n",i+1, bandas[i].numeroIntegrantes);
    printf("Ranking da banda %d: %d\n",i+1, bandas[i].ranking);
  }//for
fflush(stdin);
}//ExibirBanda

/* c) Crie uma funcao que peca ao usuario um numero de 1 ate 5. Em seguida, seu programa deve exibir
informacoes da banda cuja posiçao no seu ranking e a que foi solicitada pelo usuario.*/
void BuscaBanda(Banda *bandas, int b){
  int bandinha;
  printf("Escolha a banda desejada para exibir (1 a 5)\n" );
  scanf("%d", &bandinha );

  for (int i = 0; i < b; i++) {
    if (bandas[i].ranking == bandinha) {
      printf("Nome da banda %d: %s\n",i+1, bandas[i].nomeBanda);
      printf("Tipo de musica da banda %d: %s\n",i+1, bandas[i].tipoMusica);
      printf("Numero de integrantes da banda %d: %d\n",i+1, bandas[i].numeroIntegrantes);
      printf("Ranking da banda %d: %d\n",i+1, bandas[i].ranking);
    }//if

  }//for

}//BuscaBanda

int main() {
  int b=5;
  Banda bandas[b];

  PreencheBanda(&bandas, b);
  ExibirBanda(&bandas, b);
  BuscaBanda(&bandas, b);

}//main
