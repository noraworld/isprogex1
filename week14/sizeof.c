#include<stdio.h>
#define STR_SIZE (200)

main() {

  char str[STR_SIZE];
  char ary[100];
  int emc = sizeof(str); // element macro-size checher
  int esc = sizeof(ary); // element size checher

  printf("マクロ定義STR_SIZEの値は%dです.\n", STR_SIZE);
  printf("配列strの要素数は%dです.\n", emc);
  printf("配列aryの要素数は%dです.\n", esc);

}
