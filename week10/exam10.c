#include <stdio.h>

#define MAX_SIZE (512) /* 最大要素数 */

/* 内積を計算する関数 */
int inner_product(int x[], int y[], int size)
{
  /* 上記のsizeは配列の要素数を表す */

  int i; /* forループ用のカウンタ変数 */
  int result; /* 内積の計算用変数 */

  result = 0;
  for(i = 0; i < size; i++) {
    result += x[i] * y[i];
  }
  
  return result;
}



int main(void)
{

  int size; /* ベクトルの要素数 */
  int x[MAX_SIZE]; /* ベクトルx */
  int y[MAX_SIZE]; /* ベクトルy */
  int i; /* for文用のカウンタ変数 */

  while( 1 ) {
    printf("ベクトルの要素数は？(最大 %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size > MAX_SIZE) 
      printf("要素数は %d 以下にしてください\n", MAX_SIZE);
    else if (size < 1) 
      printf("要素数は 1 以上にしてください\n");
    else 
      break;
    }

  for (i = 0; i < size; i++) {
    printf("ベクトル x の %d 番目の要素: ", i + 1);
    scanf("%d", &x[i]);
  }

  for (i = 0; i < size; i++) {
    printf("ベクトル y の %d 番目の要素: ", i + 1);
    scanf("%d", &y[i]);
  }
  
  printf("ベクトルx, yの内積は %d です．\n", inner_product(x, y, size));
  
  return 0;
}
