#include<stdio.h>

void sort(int *left, int *right);

int main(void) {

  int large, small;

  printf("最初の数字を入力してください : ");     scanf("%d", &large);
  printf("2つめの数字を入力してください: ");     scanf("%d", &small);

  sort(&large, &small);

  printf("大きい数字は%dです.\n", large);

  return 0;
}


void sort(int *left, int *right) {

  int temp;

  if (*left < *right) {
    temp = *left;
    *left = *right;
    *right = temp;
  }

}
