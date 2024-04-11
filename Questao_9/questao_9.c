#include <stdio.h>
#include <stdlib.h>

/* 9. Qual será a saída do seguinte programa */

struct teste{
  int x = 3;
  char nome[] = "jose";
};
main(){
  struct teste *s;
  printf("%d", s->x);
  printf("%s", s->name);
}

/* O CODIGO APRESENTA ERRO DE SINTAXE. */