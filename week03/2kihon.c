#include<stdio.h>

int main(void)
{
  int score; /*変数の定義*/

  puts("点数を入力してください（100点満点）"); /*変数の入力を求める旨*/

  printf("点数：");
  scanf("%d", &score); /*点数を読み込む*/

  if (score < 0 || score > 100) /*範囲外の値を入力したとき*/
    puts("入力エラー。点数は0～100の値で入力してください。");

  else if (score >=0 && score <= 59) /*0～59のとき*/
    puts("評価値はFです。");

  else if (score >= 60 && score <= 69) /*60～69のとき*/
    puts("評価値はCです。");

  else if (score >= 70 && score <= 79) /*70～79のとき*/
    puts("評価値はBです。");

  else if (score >= 80 && score <= 89) /*80～89のとき*/
    puts("評価値はAです。");

  else if (score >= 90 && score <= 100) /*90～100のとき*/
    puts("評価値はA＋です！");

  return 0;
}
