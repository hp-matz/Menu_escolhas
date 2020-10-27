#include <stdio.h>

int main(void) {
  
  char opcao ;

  printf("  Menu Principal\n");
  printf("\n	1 - Opção 1\n");
  printf("	2 - Opção 2\n");
  printf("	3 - Opção 3\n");
  printf("	4 - Opção 4\n");
  printf("	0 - SAIR\n");
  printf("\nDigite uma Opção: ");
  scanf( "%c", &opcao); 

  switch( opcao ) {
    case '0':
      printf("\nVocê saiu do menu\n");
    break;
    case '1':
      printf("\nVocê escolheu a opção 1\n");
    break;
    case  '2':
      printf("\nVocê escolheu a opção 2\n");
    break;
    case '3':
      printf("\nVocê escolheu a opção 3\n");
    break;
    case '4':
      printf("\nVocê escolheu a opção 4\n");
    break;
    default:
      printf("\nOpção inválida\n");
  }

  return 0;
}