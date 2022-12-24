#include <stdio.h>
#define NUM (500) /* 最大要素数 */

int main(void)
{
  int vec_x[NUM]; /* ベクトル x を格納する配列 */
  int vec_y[NUM]; /* ベクトル y を格納する配列 */
  int multi[NUM]; /* 各ベクトル成分の積 */
  int inner_product = 0; /* ベクトルの内積 */
  int input; /* 入力データ値 */
  int i; /* ループカウンタ */

  printf("ベクトルの要素数は？(最大 %d)：", NUM);
  scanf("%d", &input);
  while (input < 1 || input > NUM) {
    printf("要素数は 1 以上および %d 以下にしてください。\n", NUM);
    printf("ベクトルの要素数は？(最大 %d)：", NUM);
    scanf("%d", &input);
  }
  /* 1より大きく最大要素数より小さいなら再入力 */

  for (i = 0; i < input; i++) {
    printf("ベクトル x の %d 番目の要素：", i + 1);
    scanf("%d", &vec_x[i]);
  }
  /* ベクトル x の各要素の入力 */

  for (i = 0; i < input; i++) {
    printf("ベクトル y の %d 番目の要素：", i + 1);
    scanf("%d", &vec_y[i]);
  }
  /* ベクトル y の各要素の入力 */

  for (i = 0; i < input; i++)
    multi[i] = vec_x[i] * vec_y[i];
  /* ベクトル x, y の各要素の積 */

  for (i = 0; i < input; i++)
    inner_product += multi[i];
  /* 内積 */

  printf("ベクトル x, y の内積は %d です。\n", inner_product);
  /* 内積の印字 */

  return 0;
}
