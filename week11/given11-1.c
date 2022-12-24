#include<stdio.h>

int main(void) {

  int a = 5;
  int *a_add = &a;
  int b[4] = {1, 2, 3, 4};

  printf("a = %d\n", a);
  printf("&a = %p\n", &a);
  printf("a_add = %p\n", a_add);

  printf("&a_add = %p\n", &a_add);

  printf("*a_add = %d\n", *a_add);

  printf("&b[0] = %p\n", &b[0]);

  printf("b = %p\n", b);

  printf("*b = %d\n", *b);

  printf("*(b+3) = %d\n", *(b+3));

  printf("(b+1) = %p\n", b+1);

  return 0;

}
