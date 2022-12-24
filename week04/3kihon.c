#include<stdio.h>

int main(void)
{
  int no, i, dist1, dist2;
  dist2 = 1;

  puts("素数を求めます。3以上の整数を入力してください。");

  printf("整数：");
  scanf("%d", &no);

  if (no < 3) {
    printf("入力エラー。3以下の整数を入力してください。\n"); return 0;
  }

  for ((i = 2) ; (i < no) ; (i++)) {
    dist1 = no % i;
    if (dist1 == 0) {
      dist2 = 0;
      printf("%dは素数ではありません。\n", no); break;
    }
  } /* 素数判定のループ */

  if (dist2) {
    printf("%dは素数です。\n", no);
  }

  return 0;
}
