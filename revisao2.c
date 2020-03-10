#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Exercıcio 2. [Arquivos] Fa¸ca um programa que receba
do usuario um arquivo texto. Crie outro arquivo
texto de saıda contendo o texto do arquivo de entrada original,
porem substituindo todas as vogais pelo
caractere ‘*’. Al´em disso, mostre na tela quantas linhas esse arquivo possui.
Dentro do programa fa¸ca
o controle de erros, isto ´e, insira comandos que mostre se os arquivos foram
abertos com sucesso, e caso contr´ario, imprima uma mensagem de erro encerrando o programa.*/

// bool VerificaVogal(char letra){
//   if(letra =="a" || letra =="e"|| letra =="o"|| letra =="i"|| letra =="u"){
//
//   }
// }

int main() {
  char frase[50];
  int cont=1;

  FILE *arquivinho, *arq2;
  arquivinho=fopen("arquivinho.txt","r");
  arq2=fopen("arquivinho2.txt","w");
  if(arquivinho	==	NULL || arq2 == NULL){
    printf("Ocorreu	um	erro	na	abertura	do	arquivo");
    system("pause");
    exit(1);
  }
  while(fgets(&frase, 50, arquivinho)!= NULL){
    // printf("%s\n",frase );

    for(int i=0;i<strlen(frase);i++){
      if (frase[i]=='\n') {
        // putchar (tolower(frase[i])); //minuscula converte
        cont++;
      }
      if(frase[i] =='a' || frase[i] =='e' || frase[i] =='o' || frase[i] =='i' || frase[i] =='u'){
        frase[i]='*';
        // fprintf(frase, arquivinho);
      }
    }
    fprintf(arq2, "%s",frase );
  }


  printf("total de linhas %d \n",cont );
  fclose(arquivinho);
  fclose(arq2);


  return 0;
}
