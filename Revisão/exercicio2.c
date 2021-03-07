#include<stdio.h>
#include<stdlib.h>

/*Exercıcio 2. [Arquivos] Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo
texto de saıda contendo o texto do arquivo de entrada original, porem substituindo todas as vogais pelo
caractere ‘*’. Alem disso, mostre na tela quantas linhas esse arquivo possui. Dentro do programa faca
o controle de erros, isto e, insira comandos que mostre se os arquivos foram abertos com sucesso, e caso
contrario, imprima uma mensagem de erro encerrando o programa.*/


int main() {
  FILE	*arqOpen, *arqExit;
  char leitura;
  int linhas = 0  ;

  arqOpen= fopen("arquivinhoE.txt",	"r");
  arqExit= fopen("arquivinhoS.txt",	"w");

  if(arqOpen == NULL || arqExit == NULL){
    printf("Ocorreu um erro na abertura do arquivo " );
  }//if

  do {
    leitura = fgetc(arqOpen);
    if(leitura =='A' || leitura =='a' ||
      leitura =='E' || leitura =='e' ||
      leitura =='I' || leitura =='i' ||
      leitura =='O' || leitura =='o' ||
      leitura =='U' || leitura =='u'  ) {
        fprintf(arqExit, "*");
      }//if

      if(leitura == '\n') {
        linhas++;
      }//if

      else fprintf(arqExit, "%c", leitura );

  }while (leitura != EOF);

  printf("O Arquivo possui %d linhas \n", linhas );

  fclose(arqOpen);
  fclose(arqExit);

}//main
