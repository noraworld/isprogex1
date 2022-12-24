#include<stdio.h>

void sort(int *array);

int main(void) {

  int array[3];
  int i;

  for (i = 0; i < 3; i++) {
    printf("%d番目の数値を入力してください: ", i+1);
    scanf("%d", &array[i]);
  }

  sort(array);

  for (i = 0; i < 3; i++)
    printf("%d番目に大きい値は%dです.\n", i+1, array[i]);

  return 0;
}


void sort(int *array) {

  int temp;

  if (array[0] < array[1]) {
    temp = array[0];
    array[0] = array[1];
    array[1] = temp;
  }

  if (array[0] < array[2]) {
    temp = array[0];
    array[0] = array[2];
    array[2] = temp;
  }

  if (array[1] < array[2]) {
    temp = array[1];
    array[1] = array[2];
    array[2] = temp;
  }

}
