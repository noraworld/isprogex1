#include<stdio.h>
#define ARRAY_SIZE (256)

void arrayPlus(int *a, int *b, int size);

int main(void) {

  int array1[ARRAY_SIZE];
  int array2[ARRAY_SIZE];
  int array_size;
  int i;

  printf("ベクトルの要素数を入力してください(最大 %d): ", ARRAY_SIZE);
  scanf("%d", &array_size);

  for (i = 0; i < array_size; i++) {
    printf("1つめのベクトルの%d番目の要素を入力してください: ", i+1);
    scanf("%d", &array1[i]);
  }

  for (i = 0; i < array_size; i++) {
    printf("2つめのベクトルの%d番目の要素を入力してください: ", i+1);
    scanf("%d", &array2[i]);
  }

  /* sort関数に値を渡す。array1, array2は配列の先頭のアドレスを渡している */
  arrayPlus(array1, array2, array_size);

  /* 計算結果を出力 */
  printf("2つのベクトルの和は\n(");
  for (i = 0; i < array_size; i++) {
    printf("%d", array1[i]);
    if (i < array_size - 1)
    printf(", ");
  }
  printf(")\n");

  return 0;
}


void arrayPlus(int *a, int *b, int size) {

  int i;

  for (i = 0; i < size; i++) {
    *a = *a + *b; /* aとbに入っている中身を足して、aに代入 */
    a++; /* int型のメモリ分(=4)だけ増やす */
    b++; /* int型のメモリ分(=4)だけ増やす */
  }

}
