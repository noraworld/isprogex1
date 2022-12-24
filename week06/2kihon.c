#include <stdio.h>
/* それぞれの行列の行と列のサイズをマクロで定義 */
#define P (2)
#define Q (3)
#define R (4)

int main(void) {

  /* 行列を表す二次元配列 */
  int array1[P][Q] = {
    {2, 4, 8},
    {7, 3, 3},
  };
  int array2[Q][R] = {
    {4, 5, 2, 7},
    {5, 6, 2, 8},
    {1, 2, 3, 6},
  };
  int array3[P][R] = {0};

  /* ループカウンタ */
  int i, j, k;

  /* 行列の積の計算 */
  for(i = 0; i < P; i++)
    for (k = 0; k < R; k++)
      for (j = 0; j < Q; j++)
	array3[i][k] += array1[i][j] * array2[j][k];

  /* 行列Aの表示 */
  printf("行列 A =\n");
  for (i = 0; i < P; i++) {
    for (j = 0; j < Q; j++)
      printf("%3d", array1[i][j]);
    putchar('\n');
  }

  /* 行列Bの表示 */
  printf("行列 B =\n");
  for (j = 0; j < Q; j++) {
    for (k = 0; k < R; k++)
      printf("%3d", array2[j][k]);
    putchar('\n');
  }

  /* 行列Cの表示 */
  printf("行列 A * B =\n");
  for (i = 0; i < P; i++) {
    for (k = 0; k < R; k++)
      printf("%3d", array3[i][k]);
    putchar('\n');
  }

  return 0;
}
