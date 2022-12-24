#include <stdio.h>
#include <math.h> /* 数学ライブラリの定義 */

float interest(float r, int n); /* プロトタイプ宣言 */

int main(void)
{
  float rate; /* 利率 */
  int y; /* 金額 */
  int period; /* 期間 */

  printf("利率(r): ");     scanf("%f", &rate);
  printf("金額(y): ");     scanf("%d", &y);
  printf("期間(n): ");     scanf("%d", &period);

  /* interest関数で計算したものに金額をかけて四捨五入 */
  printf("返済金額は %d です。\n", (int)(y * interest(rate, period) + 0.5));

  return 0;
}

float interest(float r, int n)
{
  double a = pow((1 + r/100), n); /* 数学ライブラリ */
  return a;
}
