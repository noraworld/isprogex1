#include<stdio.h>

int main(void)
{
  int a[6] = {10, 20, 30, 40, 50, 60};
  int i;
  int sum = 0;
  int start = 0;

  for (i = start; i < 6; i++) {
    sum += a[i];
  }

  printf("合計値は%d\n", sum);
  return 0;
}
