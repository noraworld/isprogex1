/* 不完全: 改行コードまでだとオーバーランしたときに対応できない */

#include<stdio.h>
#define STR_SIZE (256)

int main(void) {

  char str_bad[STR_SIZE];
  char str_good[STR_SIZE];
  int i = 0;

  printf("fgetsで文字列を取得: ");
  fgets(str_bad, sizeof(str_bad), stdin);
  printf("入力された文字列は%sです.\n\n", str_bad);

  printf("このようにfgets関数はナル文字の直前に改行コードを付加します。\n");
  printf("これを防ぐ方法としてstrtok関数を用いる方法もありますが\n");
  printf("どうやらこの関数にはセキュリティホールがあるらしいです（オーバーラン）。\n");
  printf("なので、改行コードまでを一文字ずつ読み取る方法が良いみたいです。\n\n");

  printf("fgetsで文字列を取得: ");
  fgets(str_good, sizeof(str_good), stdin);
  printf("入力された文字列は");
  while (str_good[i] != 10) { // 10はASCIIコードで改行を意味する
    printf("%c", str_good[i]);
    i++;
  }
  printf("です.\n");

  return 0;
}

// fgets関数で読み取った値を、strlenで文字数カウントするときも注意しよう
// (改行コード分を一文字余分にカウントしてしまいます)
