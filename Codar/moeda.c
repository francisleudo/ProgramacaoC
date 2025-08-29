#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 2;
      printf("Jogando a moeda \n");

      if (numeroSecreto == 1) {
        printf("Cara! \n");
      } else {
        printf("Coroa! \n");
      }
      printf("Retornando ao Menu Principal\n\n");
        return main();
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', é jogado uma moeda.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n\n");
        return main();
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}