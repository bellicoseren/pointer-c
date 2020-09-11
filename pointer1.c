#include <stdio.h>

void main() {

  int numero = 34;
  int *p_numero;
  p_numero = &numero;

  printf("Dato de la variable: %i\n", numero);
  printf("Dato del pointer: %i\n", *p_numero);

  printf("Posición de la variable: %p\n", &numero);
  printf("Posición del pointer: %p\n", p_numero);

}

