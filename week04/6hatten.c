#include<stdio.h>

int main(void)
{
  int n; /* 行数 */
  int row; /* ループ用変数(行) */
  int column; /* ループ用変数(列) */

  do {
    printf("行数を示す正の奇数：");
    scanf("%d", &n);
  } while ((n <= 0) || (n % 2 == 0)); /* 正の奇数でなければ再入力を求める */

  for ((row = 1) ; (row <= n) ; (row++)) { /* 行のループ */
    for ((column = 1) ; (column <= n) ; (column++)) /* 列のループ */
      putchar(((column == row) || (column == n - row + 1)) ? '*' : '-'); /* 注１ */
    putchar('\n'); /* 改行 */
  }
  /* 注１
対角線上にアスタリスクを描く。
それ以外の所はマイナスを描く。
  */

  return 0;
}
