#include <stdio.h>
#define NUM (500) /* 最大要素数 */

int main(void)
{
  int element[NUM]; /* 要素 */
  int i; /* ループカウンタ */
  int times = 0; /* 正の整数の入力回数 */

  for (i = 0; i < NUM; i++) {
    printf("正の整数：");
    scanf("%d", &element[i]);
    times++;
    if (element[i] == 0)
      break;
  }
  /* 0が入力されるまでひたすら値を読み込む */
  /* ただし、最大要素数まで */

  printf("入力された整数は小さい順に ");
  for (i = 0; i < (times - 1); i++)
    printf("%d, ", element[i]);
  printf("%d ", element[times - 1]);
  printf("です。\n");
  /* 小さい順に各要素を表示 */

  return 0;
}
