#include <stdio.h>
/* 数学ライブラリを使うためのヘッダファイル */
#include<math.h>

/* プロトタイプ宣言 */
float interest(float r, int n);

int main(void)
{
  float rate; /* 利率 */
  int y; /* 金額 */
  int num; /* 期間 */
  int money; /* 金額 */

  /* 値の読み込み */
  printf("利率(r): ");
  scanf("%f",&rate);
  
  printf("金額(y): ");
  scanf("%d",&y);

  printf("期間(n): ");
  scanf("%d",&num);

  /* n年後の利率に元金をかけ，返済額を求める．小数点以下第1位で四捨五入 */
  money = (int)(interest(rate, num) * y + 0.5);

  printf("返済金額は%d円です\n", money);

  return 0;
}


float interest(float r, int n)
{
  float result;

  /* n年後の利率を，(1+r/100)をn乗してを計算．数学ライブラリ関数を使うこと */
  result = pow((1+r/100), n);
  return result;
}
