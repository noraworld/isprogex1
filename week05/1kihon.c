#include<stdio.h>

int main(void)
{
  int element[10] = {10, 5, 25, -10, 7, 0, 52, 27, -8, 1};
  /* 要素数10の配列を定義して、配列要素を初期化 */

  int i; /* ループカウンタ */

  for (i = 0; i < 10; i++) /* 10回印字を繰り返す */
    printf("%d番目の内容は%dです。\n", (9 - i), element[9 - i]);

  return 0;
}
