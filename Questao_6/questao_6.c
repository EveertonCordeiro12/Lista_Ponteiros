#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int vetor[5];
  int *ponteiro;

  // EXEMPLO
  vetor [0] = 10;
  vetor [1] = 20;
  vetor [2] = 30;
  vetor [3] = 40;
  vetor [4] = 50;

      // VERDADEIRO
      ponteiro = *(vetor + 2);
      printf("%d \n", ponteiro);
  
  ponteiro = *(vetor + 4);
  printf("%d \n", ponteiro);
  
  ponteiro = vetor + 4;
  printf("%d \n", ponteiro);
  
  ponteiro = vetor + 2;
  printf("%d \n", ponteiro);
  
  return 0;
}

//  *(pulo + 2); VERDADEIRO;
//  *(pulo + 4); FALSO, IRÁ REFERENCIAR O VALOR DO QUARTO ELEMENTO DO VETOR;
//    pulo + 4;  FALSO, IRÁ REFERENCIAR A POSIÇÃO DO QUARTO ELEMENTO DO VETOR;
//    pulo + 2;  FALSO, IRÁ REFERENCIAR A POSIÇÃO DO SEGUNDO ELEMENTO DO VETOR;