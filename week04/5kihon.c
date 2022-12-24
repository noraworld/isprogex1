#include<stdio.h>

int main(void)
{
  int num, line_num, ast_num, ast;

  printf("正の整数：");
  scanf("%d", &num);

  if (num <= 0) {
    puts("正の整数ではありません。");
    return 1;
  }

  for ((line_num = 1) ; (line_num <= num) ; (line_num++)) { /* 各行の出力 */
    ast_num = line_num * 2 - 1; /* アスタリスクの数の計算 */
  for ((ast = 1) ; (ast <= num - line_num) ; (ast++))
    putchar(' '); /* アスタリスクの左の空白を出力 */
  for ((ast = 1) ; (ast <= ast_num) ; (ast++))
    putchar('*'); /* アスタリスクを出力 */
  putchar('\n');/* 各行の最後で改行 */
  }

  return 0;
}

/* gdbの印字結果は2行目は$1 = 3, 3行目は$2 = 5 */
