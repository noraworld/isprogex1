#include <stdio.h>
#include <math.h>
#define ELEMENT (512)

float norm(int vec[], int element);

int main(void) {

  int vec[ELEMENT] = {0};
  int element;
  int i;

  do {
    printf("ベクトルの要素数は？(最大 %d): ", ELEMENT);
    scanf("%d", &element);

    if (element < 1 || element > ELEMENT)
      printf("要素数は %d 以下にしてください。\n", ELEMENT);

  } while (element < 1 || element > ELEMENT);

  for (i = 0; i < element; i++) {
    printf("%d 番目の要素: ", i + 1);
    scanf("%d", &vec[i]);
  }

  printf("このベクトルのノルムは %f です。\n", norm(vec, element));

  return 0;
}


float norm(int vec[], int element) {

  int i;
  float sum = 0;
  float root_sum = 0;

  for (i = 0; i < element; i++)
    sum += vec[i] * vec[i];

  root_sum = sqrt(sum);

  return root_sum;
}
