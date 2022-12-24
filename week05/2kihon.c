#include<stdio.h>
#define NUM (500) /* 最大データ数の定義 */

int main(void)
{
  int element[NUM]; /* 要素数は最大データ数 */
  int input; /* 入力データ数 */
  int i; /* ループカウンタ */

  do {
    printf("入力データ数は？(MAX: %d)：", NUM);
    scanf("%d", &input);
  } while (input < 1 || input > NUM);
  /* 条件を満たさない限り、入力データ数を入力させる */

  for (i = 0; i < input; i++) {
    printf("%3d番目のデータ：", i);
    scanf("%d", &element[i]);
  }
  /* 入力データ数分、データを入力させる */

  putchar('\n');

  for (i = 0; i < input; i++)
    printf("%3d番目の内容は%dです。\n", (input -1 - i), element[input -1 - i]);
  /* 印字 */

  return 0;
}
