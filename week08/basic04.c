#include <stdio.h>
#include <math.h>
#define ELEMENT (512)

float trigonometric_function(int vec_x[], int vec_y[], int element);

int main(void) {

  int vec_x[ELEMENT] = {0};
  int vec_y[ELEMENT] = {0};
  int element;
  int i;

  do {
    printf("ベクトルの要素数は？(最大 %d): ", ELEMENT);
    scanf("%d", &element);

    if (element < 1 || element > ELEMENT)
      printf("要素数は %d 以下にしてください.\n", ELEMENT);

  } while (element < 1 || element > ELEMENT);

  puts("ベクトル x の要素の入力:");
  for (i = 0; i < element; i++) {
    printf("%d 番目の要素: ", i + 1);
    scanf("%d", &vec_x[i]);
  }

  puts("ベクトル y の要素の入力:");
  for (i = 0; i < element; i++) {
    printf("%d 番目の要素: ", i + 1);
    scanf("%d", &vec_y[i]);
  }

  printf("cosθ の値は %f です.\n", trigonometric_function(vec_x, vec_y, element));

  return 0;
}


float trigonometric_function(int vec_x[], int vec_y[], int element) {

  int i;
  int mult[element];
  int inner_product = 0;
  float sum_x = 0;
  float sum_y = 0;
  float root_sum_x = 0;
  float root_sum_y = 0;
  float norm;
  float result;


  /* 内積の計算 */
  for (i = 0; i < element; i++)
    mult[i] = vec_x[i] * vec_y[i];
  for (i = 0; i < element; i++)
    inner_product += mult[i];


  /* ノルムの計算 */
  for (i = 0; i <element; i++)
    sum_x += vec_x[i] * vec_x[i];
  root_sum_x = sqrt(sum_x);

  for (i = 0; i < element; i++)
    sum_y += vec_y[i] * vec_y[i];
  root_sum_y = sqrt(sum_y);

  norm = root_sum_x * root_sum_y;

  result = inner_product / norm;

  return result;
}
