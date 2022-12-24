#include <stdio.h>
#define NUM (500) /* 最大要素数 */

int main(void)
{
  int element[NUM]; /* 配列の定義 */
  int input; /* 入力要素数 */
  int i; /* ループカウンタ */
  int sum = 0; /* 合計値 */
  double ave = 0; /* 平均値 */

  printf("ベクトルの要素数は？(最大 %d)：", NUM);
  scanf("%d", &input);
  while (input < 1 || input > NUM) {
    printf("要素数は 1 以上および %d 以下にしてください。\n", NUM);
    printf("ベクトルの要素数は？(最大 %d)：", NUM);
    scanf("%d", &input);
  }
  /* 1より小さい、または最大要素数より大きいときは再入力 */

  for (i = 0; i < input; i++) {
    printf("%3d番目の要素：", i + 1);
    scanf("%d", &element[i]);
  }
  /* 各要素の入力 */

  for (i = 0; i < input; i++)
    sum += element[i];
  /* 全ベクトル要素の合計 */

  ave = (double) sum / input;
  /* 全ベクトル要素の平均 */

  printf("偏差ベクトルは(");
  for (i = 0; i < (input - 1); i++)
    printf("%.1f, ", (double) element[i] - ave);
  printf("%.1f", (double) element[input - 1] - ave);
  printf(")です。\n");
  /* 全ベクトル要素の平均を各ベクトル要素から引いたものをすべて印字 */

  return 0; 
}
