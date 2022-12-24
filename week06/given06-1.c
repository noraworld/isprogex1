#include <stdio.h>
#define MAX_NUMBER (100)

int main(void)
{
  int divisor[MAX_NUMBER][MAX_NUMBER];
  int count[MAX_NUMBER];
  int i, j;
  int counter;

  printf("1から100までの整数に対してそれぞれの約数を出力します。\n\n");

  for (i = 1; i <= MAX_NUMBER; i++) {
    counter = 0;
    for (j = 1; j <= i; j++) {
      if(i%j == 0) {
	divisor[i-1][counter] = j;
	counter++;
      }
    }
    count[i - 1] = counter;
  }

  for (i = 0; i < MAX_NUMBER; i++) {
    printf("%dの約数：", i + 1);

    for (j = 0; j < count[i]; j++)
      printf("%d, ", divisor[i][j]);

    printf("\n");
  }

  return 0;
}
