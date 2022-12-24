#include <stdio.h>

void run(char c, int length); /* プロトタイプ宣言 */

int main(void) {
  int line_num, i;

  /* 正の整数を入力 */
  do {
    printf("正の整数: ");     scanf("%d", &line_num);
  } while (line_num <= 0);

  /* アスタリスクとブランクの印字処理をループ */
  for (i = 1; i <= line_num; i++) {
    printf("%2d: ", i);
    run(' ', (i - 1));
    run('*', (line_num + 1 - i));
    putchar('\n');
  }

  return 0;
}

void run(char c, int length)
{
  while (length-- > 0)
    putchar(c);
  return;
}
