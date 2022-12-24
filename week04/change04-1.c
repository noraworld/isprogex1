#include<stdio.h>

int main(void)
{
  int small;
  int large;
  int target;

  do {
    printf("小さい方の整数：");
    scanf("%d", &small);

    printf("大きい方の整数：");
    scanf("%d", &large);

    if (small >= large)
      printf("小さい整数を入力してから大きい整数を入力してください\n\n");
  } while(small >= large);

  printf("%d以上%d以下の３の倍数は\n", small, large);
  target = large;
  while (target >= small) {
    if (target % 3 == 0)
      printf("\t%d\n", target);
    target--;
  }
  printf("です。\n");

  return 0;
}
