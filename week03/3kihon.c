#include<stdio.h>

int main(void)
{
  int month; /*変数の定義*/

  puts("季節を表示します。月を入力してください。"); /*月の入力を求める旨*/

  printf("何月ですか？："); /*月の入力を求める旨*/
  scanf("%d", &month); /*数値を読み込む*/

  if ( (month >= 3) && (month <= 5) ) /*3～5月を入力したとき*/
    printf("%d月は春です。\n", month);

  else if ( (month >= 6) && (month <= 8) ) /*6～8月を入力したとき*/
    printf("%d月は夏です。\n", month);

  else if ( (month >= 9) && (month <= 11) ) /*9～11月を入力したとき*/
    printf("%d月は秋です。\n", month);

  else if ( (month == 1) || (month == 2) || (month == 12) ) /*12,1,2月を入力したとき*/
    printf("%d月は冬です。\n", month);

  else
    printf("%d月はありません！！\n", month); /*上記以外の値を入力したとき*/

  return 0;
}
