#include <stdio.h>
#define NUM1 (10) /* 人数の定義 */
#define NUM2 (2) /* 点数と順位(数)の定義 */

int main(void) {

  int score_rank[NUM1][NUM2] = { /* 点数と順位を代入する二次元配列 */
    {67, 0},
    {48, 0},
    {56, 0},
    {97, 0},
    {30, 0},
    {88, 0},
    {76, 0},
    {55, 0},
    {66, 0},
    {78, 0},
  }; /* 初期化 */
  int i, j; /* ループカウンタ */
  int rank = 1; /* 順位決め */

  for (i = 100; i >= 0; i--) {
    for (j = 0; j < NUM1; j++) {
      if (score_rank[j][0] == i) {
	score_rank[j][1] = rank;
	rank++;
	break;
      }
    }
  } /* 配列の二列目に点数の順位を代入 */

  for (i = 0; i < NUM1; i++) {
    printf("%d %d", score_rank[i][0], score_rank[i][1]);
    putchar('\n');
  } /* 表示 */

  return 0;
}
