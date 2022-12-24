#include<stdio.h>

int main(void)
{
  double sin, tai, std, sa;
 /*
　　↑変数の定義
　　sin は身長
　　tai は体重
　　std は標準体重
　　sa は体重と標準体重の差
*/


  puts("身長と体重を入力してください。"); /*身長と体重を求める旨*/

  printf("身長："); /*身長を求める旨*/
  scanf("%lf", &sin); /*身長の値を読み込む*/

  printf("体重："); /*体重を求める旨*/
  scanf("%lf", &tai); /*体重の値を読み込む*/

  std = (sin - 100) * 0.9; /*標準体重の値*/
  printf("標準体重は%.1fです。\n", std); /*標準体重の値を表示*/

  sa = (std > tai) ? (std - tai) : (tai - std); /*体重と標準体重の差*/
  if (sa > 8)
    puts("少し太っています。"); /*差が８を超えていれば表示*/

  return 0;
}
