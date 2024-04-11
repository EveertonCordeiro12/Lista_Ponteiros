#include <stdio.h>

/* 10. Qual será a saída do seguinte program */

void main(){
  int const *x = 3;
  printf("%d", ++(*x));
}

/* O CODIGO APRESENTA ERRO DE SINTAXE, POIS NÃO É POSSIVEL INCREMENTAR UM INTEIRO A UM PONTEIRO CONSTANTE */
