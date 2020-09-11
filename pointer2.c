#include <stdio.h>

int main() {

  int entero = 2;
  float decimal = 3.2;
  char caracter = 'x';

  int *p_entero = &entero;
  float *p_decimal = &decimal;
  char *p_caracter = &caracter;


  printf("Entero: %d\n", *p_entero);
  printf("Espacio en memoria de entero: %p\n", p_entero);
  printf("Decimal: %.2f\n", *p_decimal);
  printf("Espacio de memoria del decimal: %p\n", p_decimal);
  printf("Caracter: %c\n", *p_caracter);
  printf("Espacio de memoria del caracter: %p\n", p_caracter);

  return 0;
}
