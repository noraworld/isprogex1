#include<stdio.h>

int main(void) {

  int a;
  int *b;

  printf("変数aの値を入力してください: ");
  scanf("%d", &a);

  b = &a;

  printf("aの中身は%dです.\n", a);
  //  printf("aのアドレスは%pです.\n", &a);
  printf("aのアドレスは%pです.\n", b);

  return 0;
}
