#include <stdio.h>
#include <stdlib.h>


int main() {
  
  int mat[4], *p, x;
  
    mat [0] = 10;
    mat [1] = 20;
    mat [2] = 30;
    mat [3] = 40;

    // (a)
    p = mat + 1; // VERDADEIRO
    printf("%d \n", p);
    // o ponteiro p irá receber o endereço do vetor 'mat' mais um salto de uma posição

   // (b)
    p = mat; // VERDADEIRO
    printf("%d \n", p);
  // o ponteiro p irá receber o endereço do vetor 'mat' na posição 0


   // (c)
    p = mat; // VERDADEIRO
    printf("%d \n", p);
   // o ponteiro p irá receber o endereço do vetor 'mat' na posição 0

  // (d)
    x = (*mat); // VERDADEIRO
    printf("%d \n", x);
  // A variável x irá receber o conteúdo do vetor 'mat'
    return 0;
}