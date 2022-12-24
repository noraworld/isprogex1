#include<stdio.h>

int main(void)
{
  int a[6] = {10, 20, 30, 40, 50, 60};
  int i;
  int buffer1;
  double buffer2;
  double mean;
  double variance;
  int start, end = 5;

  buffer1 = 0;

  while (1) {
    printf("計算に参加する配列の先頭要素は何番目？");
    scanf("%d", &start);
    if (start >= 0 && start <= 5)
      break;
  }

  for (i = start; i <= end; i++) {
    buffer1 += a[i];
  }

  mean = buffer1 / (end - start + 1);

  buffer2 = 0.0;

  for (i = start; i <= end; i++) {
    buffer2 += (a[i] - mean) * (a[i] -mean);
  }

  variance = buffer2 / (end -start + 1);

  printf("平均は%4.1f\n", mean);
  printf("分散は%4.1f\n", variance);

  return 0;
}
