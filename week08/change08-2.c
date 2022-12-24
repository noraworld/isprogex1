#include <stdio.h>
#define ROW (2)
#define COLUMN (3)

void matrix_add(int matrix_a[ROW][COLUMN], int matrix_b[ROW][COLUMN], int matrix_c[ROW][COLUMN]);

int main(void) {

  int i, j;

  int matrix_a[ROW][COLUMN], matrix_b[ROW][COLUMN], matrix_c[ROW][COLUMN];

  printf("行列Aと行列Bの和を計算します。\n");

  printf("行列Aの要素を入力してください。\n\n");
  for(i=0; i<ROW; i++)
    for(j=0; j<COLUMN; j++)
      {
	printf("matrix_a[%d][%d]:", i, j);
	scanf("%d", &matrix_a[i][j]);
      }

  printf("\n行列Bの要素を入力してください。\n\n");
  for(i=0; i<ROW; i++)
    for (j=0; j<COLUMN; j++)
    {
      printf("matrix_b[%d][%d]:", i, j);
      scanf("%d", &matrix_b[i][j]);
    }

  matrix_add(matrix_a, matrix_b, matrix_c);

  printf("\n行列Aと行列Bの和は\n");
  for(i=0; i<ROW; i++) {
    for(j=0; j<COLUMN; j++)
      printf("%3d", matrix_c[i][j]);

    printf("\n");
  }
  printf("となります。\n");

  return 0;
}

void matrix_add(int matrix_a[ROW][COLUMN], int matrix_b[ROW][COLUMN], int matrix_c[ROW][COLUMN]) {

  int i, j;

  for(i=0; i<ROW; i++)
    for(j=0; j<COLUMN; j++)
      matrix_c[i][j] = 3 * matrix_a[i][j] + 5 * matrix_b[i][j];

  return;
}
