#include <stdio.h>
#define ELEMENT (512)

int inner_product(int vec_x[], int vec_y[], int element);

int main(void) {

  int vec_x[ELEMENT] = {0};
  int vec_y[ELEMENT] = {0};
  int i;
  int element;

  do {
    printf("ベクトルの要素数は？(最大 %d): ", ELEMENT);
    scanf("%d", &element);

    if (element < 1 || element > ELEMENT)
      printf("要素数は %d 以下にしてください.\n", ELEMENT);

  } while (element < 1 || element > ELEMENT);

  for (i = 0; i < element; i++) {
    printf("ベクトル x の %d 番目の要素: ", i + 1);
    scanf("%d", &vec_x[i]);
  }

  for (i = 0; i < element; i++) {
    printf("ベクトル y の %d 番目の要素: ", i + 1);
    scanf("%d", &vec_y[i]);
  }

  printf("ベクトル x, y の内積は %d です.\n", inner_product(vec_x, vec_y, element));

  return 0;
}


int inner_product(int vec_x[], int vec_y[], int element) {

  int mult[element];
  int inner_product = 0;
  int i;

  for (i = 0; i < element; i++)
    mult[i] = vec_x[i] * vec_y[i];

  for (i = 0; i < element; i++)
    inner_product += mult[i];

  return inner_product;
}
