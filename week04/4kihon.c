#include<stdio.h>

int main(void)
{
  int no, pluser; /* pluserは角数の増やし子 */
  no = 2;
  pluser = 1; /* pluser(増やし子)の初期値 */

  while (no >= 2 && no <= 11) { /* noが2～11の範囲ならwhile内実行 */
    no++; /* noをインクリメント */
    if (360 % no) /* 回転角が整数にならないときは */
      continue; /* スキップ */
    printf("正%2d角形： ", no);
    while (pluser <= no) { /* 何度 1m の記述をno回 表示 */
    printf("%3d度 1m ", 360 / no);
    pluser++; /* pluserをインクリメント */
  }
    pluser = 1; /* pluser(増やし子を初期値(1)に戻す */
    putchar('\n'); /* 改行 */
  }

  return 0;
}
