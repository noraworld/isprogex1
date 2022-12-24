#include <stdio.h>
#define NUM (100)
/* 最大データ数を定義 */

int main(void)
{
  int element[NUM]; /* 要素数が最大データ数 */
  int i;
  int input;

  do {
    printf("入力データ数(最大%dまで)：", NUM);
    scanf("%d", &input);
  } while (input < 1 || input > NUM);
  /* キーボードより入力された整数を入力データ数として代入 */
  /* 条件を満たさなければ満たすまでループ */

  for (i = 0; i < input; i++) {
    printf("%d番目のデータ：", i);
    scanf("%d", &element[i]);
  }
  /* 整数入力 */

  printf("最大の要素は%dで、そのインデックスは%dである。\n", element[input - 1], input - 1);
  /* 配列内の最大の要素と そのインデックス */

  return 0;
}
