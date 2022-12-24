/* 不完全: strtokにはセキュリティホールがある(バッファオーバーラン) */

/*
【scanfの仕様】
scanfはスペースまたは改行(エンターキー入力)までを読み取り対象とする。
たとえば「hello world」と入力すると、「hello」までしか読み取れない。
さらに、入力の残りはそのまま残す。
つまり、「hello」と入力すると、「o」のあとの改行コード(ASCIIコードでは10)で止まる。
そのため、scanfのあとでgets関数やfgets関数を使用すると、
getsやfgetsはその改行コードを受け取り、新たなキー入力を待たずに終了してしまう。

解決方法はgetsやfgetsの入力の前にgetsやfgetsのダミーで一行を読み込む方法である。
具体的なプログラムの末尾に ※1 を付している。
*/

/* ---------------------------------------------------------
【getsの仕様】
基本的にはfgetsと同じだが、gets関数は文字型配列の要素数を知らない。
そのため、設定された要素数よりも多くの文字を入力すると、
そのプログラムの範囲外のメモリに文字を入力しようとして、
予期しない事態が起こる（セキューリティホール）

gets関数を用いた場合のセキュリティホールの回避策はない。
fgets関数またはscanfを用いることを推奨する。
*/

/* --------------------------------------------------------
【fgetsの仕様】
改行までを読み取り対象とする。
「hello world」と入力すれば「hello world」が読み取られる。
ただし、fgets関数はエンターキーによる改行コードをナル文字の直前に付加する。
そのため、printf関数で「%sです.」と入力させようとすると、

hello world
です.

となってしまう。

解決策は、strtok関数を使用することである。
具体的なプログラムの末尾に ※2 を付している。
なお、strtok関数はstring.hをインクルードする必要がある。
*/

 /* -------------------------------------------------- */

#include<stdio.h>
#include<string.h>
#define STR_SIZE (256)
#define DMY (10)

int main(void) {

  char str_scanf[STR_SIZE];
  char str_gets[STR_SIZE];
  char str_fgets[STR_SIZE];
  char dmy[DMY];

  printf("scanfで読み取る文字列: ");
  scanf("%s", str_scanf);

  gets(dmy); // ※1 fgetsでダミーを書いてもOK
  printf(" getsで読み取る文字列: ");
  gets(str_gets);

  printf("fgetsで読み取る文字列: ");
  fgets(str_fgets, STR_SIZE/*sizeof(str_fgets)でもOK*/, stdin);

  putchar('\n');

  printf("scanfで読み取った文字列は%sです.\n", str_scanf);
  printf(" getsで読み取った文字列は%sです.\n", str_gets);
  strtok(str_fgets, "\n\0"); // ※2
  printf("fgetsで読み取った文字列は%sです.\n", str_fgets);

  return 0;
}

/* ----------------------------------------------------
【gdb info.】

〈〈 case scanf 〉〉
variable "str_scanf" is standard inputted "abc def".
then variable "str_scanf" is substituted below.

str_scanf[0] = 'a'
str_scanf[1] = 'b'
str_scanf[2] = 'c'
str_scanf[3] = '\0' (ASCII code is 0, which means null)
element after [4] is undefined (is being substituted unknown data).



〈〈 case gets 〉〉
variable "str_gets" is standard inputted "abc def".
then variable "str_gets" is substituted below.

str_gets[0] = 'a'
str_gets[1] = 'b'
str_gets[2] = 'c'
str_gets[3] = ' ' (ASCII code is 32, which means space)
str_gets[4] = 'd'
str_gets[5] = 'e'
str_gets[6] = 'f'
str_gets[7] = '\0' (ASCII code is 0, which means null)
element after [8] is undefined (is being substituted unknown data).



〈〈 case fgets 〉〉
variable "str_fgets" is standard inputted "abc def".
then variable "str_fgets" is substituted below.

str_fgets[0] = 'a'
str_fgets[1] = 'b'
str_fgets[2] = 'c'
str_fgets[3] = ' ' (ASCII code is 32, which means space)
str_fgets[4] = 'd'
str_fgets[5] = 'e'
str_fgets[6] = 'f'
str_fgets[7] = '\n' (ASCII code is 10, which means new line)
str_fgets[8] = '\0' (ASCII code is 0, which means null)
element after [9] is undefined (is being substituted unknown data).

------------------------------------------------------------------- */
