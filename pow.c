#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int base, int exp){
  int res = pow(base, exp);

  return res;
}

int main(void){
  int a = 0; 
  int b = 0;
  int op = 0;
  puts("Potencia");

  printf("Ingresa el numero\n");
  scanf("%i", &a);

  printf("Ingresa el exponente\n");
  scanf("%i", &b);

  op = potencia(a, b);
  printf("El resultado es: %i", op);
}
