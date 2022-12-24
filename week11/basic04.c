#include<stdio.h>

void cal(int *x, int *y, int type);

int main(void) {

  int x, y, type;

  printf("最初の数字を入力してください: ");     scanf("%d", &x);

  while (type != 5) {
    do {
      puts("どの四則演算を行うか入力してください");
      printf("1:足し算, 2:引き算, 3:かけ算, 4:割り算, 5:終了 :");
      scanf("%d", &type);
    } while (type <= 0 || type >= 6);
    switch (type) {
    case 1 : printf("%d+?: ", x); scanf("%d", &y); break;
    case 2 : printf("%d-?: ", x); scanf("%d", &y); break;
    case 3 : printf("%d*?: ", x); scanf("%d", &y); break;
    case 4 : printf("%d/?: ", x); scanf("%d", &y); break;
    }
    if (type != 5) {
      cal(&x, &y, type);
      printf("計算結果は%dです.\n", x);
    }
  }

  printf("終了します.\n");

  return 0;
}


void cal(int *x, int *y, int type) {

  switch (type) {
  case 1 : *x = *x + *y; break;
  case 2 : *x = *x - *y; break;
  case 3 : *x = *x * *y; break;
  case 4 : *x = *x / *y; break;
  }

}
