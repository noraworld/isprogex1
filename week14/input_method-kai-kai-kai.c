/* バッファオーバーランチェック(オーバーランしないプログラム) */

#include<stdio.h>
#define STR_SIZE (5)

int main(void) {

  char str[STR_SIZE];
  int i = 0;

  printf("要素数は%dです. オーバーランしてください: ", STR_SIZE);
  fgets(str, sizeof(str), stdin);
  printf("入力された文字列は");
  while (str[i] != 10) {
    printf("%c", str[i]);
    i++;
    if (str[i] == '\0')
      break;
  }
  printf("です.\n");

  return 0;
}
