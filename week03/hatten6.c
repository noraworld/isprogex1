#include<stdio.h>

int main(void)
{
  int command, student, english, math;
/*
変数の定義。commandはコマンド、studentは学生証番号、englishは英語の点数、mathは数学の点数
*/

  student = 1234; /*初期情報*/
  english = 94; /*初期情報*/
  math = 78; /*初期情報*/

  printf("現在の成績情報は、学生証番号：%d　英語：%d点　数学：%d点です。\n", student, english, math); /*現在の成績情報の出力*/
  puts("[0] 学生証番号の修正");
  puts("[1] 英語の点数の修正");
  puts("[2] 数学の点数の修正");
  printf("どのコマンドを実行しますか？："); /*コマンドの入力を求める旨*/
  scanf("%d", &command); /*コマンド読み込む*/

  switch (command) {
  case 0 : printf("新しい学生証番号を入力してください："); scanf("%d", &student); break;
  case 1 : printf("新しい英語の点数を入力してください："); scanf("%d", &english); break;
  case 2 : printf("新しい数学の点数を入力してください："); scanf("%d", &math); break;
  default : puts("該当するコマンドがないため、成績情報は更新されませんでした。");
  } /*コマンドのsw文*/

    if (student < 1000 || student > 10000) {
      student = 1234;
    } /*学生証番号が４ケタではないときは変更されない*/

    if (english < 0 || english > 100) {
      english = 94;
    } /*点数が0～100ではないときは変更されない*/

    if (math < 0 || math > 100) {
      math = 78;
    } /*点数が0～100ではないときは変更されない*/

    printf("現在の成績情報は、学生証番号：%d　英語：%d点　数学：%d点です。\n", student, english, math); /*変更後の成績情報の出力*/

    return 0;
}
