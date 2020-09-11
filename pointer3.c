#include <stdio.h>

int main(){

  int num, *ptr;
  printf("Ingresa numero: ");
  scanf("%d", &num);

  ptr = &num;

  if(*ptr%2 == 0) {
    printf("Es par");
    printf("%p\n", ptr);
  }else{
    printf("Es impar\n");
  }
    return 0;
}

