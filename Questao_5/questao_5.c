#include <stdio.h>
#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco\n");
  for(i = 0 ; i <= 4 ; i++){
  printf("i = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X",i, f+i);
  printf("\n");
  }
}

/*Resultados Obtidos:
contador/valor/valor/endereco/endereco
i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = C8C4DCF0 (f + 0) = C8C4DCF0
i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = C8C4DCF4 (f + 1) = C8C4DCF4
i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = C8C4DCF8 (f + 2) = C8C4DCF8
i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = C8C4DCFC (f + 3) = C8C4DCFC
i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = C8C4DD00 (f + 4) = C8C4DD00
  */