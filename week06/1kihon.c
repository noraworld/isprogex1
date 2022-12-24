#include <stdio.h>
#define ROW (3) /* 行マクロ */
#define COLUMN (3) /* 列マクロ */

int main(void) {

  int array[ROW][COLUMN]; /* 二次元配列 */
  int i, j; /* ループカウンタ */

  /* 二重ループ(数値代入) */
  for (i = 0; i < COLUMN; i++)
    for (j = 0; j < ROW; j++) {
      printf("input u[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }

  /* 二重ループ(数値表示) */
  printf("\nThe matrix is\n");
  for (i = 0; i < COLUMN; i++) {
    for (j = 0; j < ROW; j++)
      printf("%5d", array[i][j]);
  putchar('\n');
  }

  return 0;
}
