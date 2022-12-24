#include<stdio.h>

int main(void)
{
  int a[6] = {10, 20, 30, 40, 50, 60};
  int i;
  int buffer1;
  double buffer2;
  double mean;
  double variance;
  int start, end;

  buffer1 = 0;

  while (1) {
    printf("計算の対象とする配列の最初の要素は何番目？");
    scanf("%d", &start);
    if (start >= 0 && start <= 5)
      break;
  }

  while (1) {
    printf("計算の対称とする配列の最後尾の要素番号は？");
    scanf("%d", &end);
    if (end >= 0 && end <= 5)
      break;
  }

    if (start >= end) {
      puts("計算の対象とする最初の要素番号よりも小さな値が最後尾の要素番号として入力されました。計算ができません。");
      return 1;
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
