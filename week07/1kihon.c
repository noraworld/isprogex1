#include <stdio.h>

float multFloat(float x, float y); /* プロトタイプ宣言 */

int main(void) {
  float value1, value2; /* float型変数を2つ定義 */

  /* 0が2つ入力されるまでループ */
  while (1) {
    printf("最初の数：");     scanf("%f", &value1);
    printf("つぎの数：");     scanf("%f", &value2);
    if ((value1 == 0) && (value2 == 0))
      return 0;
    printf("2つの積は%.2fです。\n", multFloat(value1, value2));
  }

  return 0;
}

float multFloat(float x, float y) {
  float product;

  product = x * y; /* 引数2つを掛け算 */

  return product;
}
