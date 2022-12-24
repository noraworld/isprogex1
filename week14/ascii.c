#include<stdio.h>

main() {

  char ascii;
  int in;

  printf("あ%%cい\\n\n");
  printf("シーケンス: ");
  scanf("%d", &in);

  ascii = in;

  printf("あ%cい\n", ascii);

}
