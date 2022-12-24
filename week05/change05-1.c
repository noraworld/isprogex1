#include<stdio.h>

int main(void)
{
  int a[6] = {10, 20, 30, 40, 50, 60};
  int i;
  int sum = 0;
  int start = 0;
  int end;

  while (1) {
    printf("最後尾の値は？：");
    scanf("%d", &end);
    if (end >= 1 && end <= 5)
      break;
  }

  for (i = start; i < end + 1; i++) {
    sum += a[i];
  }

  printf("合計値は%d\n", sum);
  return 0;
}
