#include <stdio.h>

void main() {

  int i, j, k;
  j = (i = 0);
  printf("%d", j);

  i = j = k = 5;
  printf("%d", i);

  float f;
  f = 57.68f; //changing to float rather than default double type
  f = i = f;
  printf("%f", f);

  i = 10; //fixing lvalue error
  printf("%d", i);

  i = 5; //fixing lvalue error
  printf("%d", i);
  i = 5, j;
  j = 20 - i; //fixing lvalue error
  printf("%d", j);

  i = -20; //fixing lvalue error
  printf("%d", i);

  int v = 5, e = 2;
  v %= e;
  printf("%d", v);

  i = 10;
  printf("%d", ++i);
  printf("i=%d\n", i++);
  printf("i=%d\n", i);

}
