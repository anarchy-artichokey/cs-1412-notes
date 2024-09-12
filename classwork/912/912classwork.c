#include <stdio.h>

void main() {

  int i = 10;
  printf("i is%d\n", ++i);
  printf("i is%d\n", i);

  i = 10;
  printf("i is%d\n", i++);
  printf("is is%d\n", i);

  i = 10;
  printf("i is %d\n", --i);
  printf("i is %d\n", i);

  i = 10;
  int j = --i * 6;
  printf("j is %d\n", j);

  int k = i < j;
  printf("k is %d\n", k);

 //variable l is never used

  j = 5;
  k = 5;

  int a = j +5 < 1 - 15;
  printf("%d\n", a);
  a = j + 5; //extraneous comparison operator
  printf("%d\n", a);

  i = 5, j = 3, k = 4;
  a = (i < j) < j; //clearly marking precedence
  printf("%d\n", a);
  a = 5 != 6;
  printf("a=%d\n", a);

  a = (i < j) == (j < k); //clearly marking precedence
  printf("a=%d\n", a);

  a = (i > j) && (j < k); //clearly marking precedence

  a = (i < j) && (j < k); //clearly marking precedence

  printf("a=%d\n", a);

  a = (i < j) || (j < k); //clearly marking precedence
  printf("a=%d\n", a);
  a = (i < j) || (i = 0); //clearly marking precedence
  printf("i=%d\n", i);

}
