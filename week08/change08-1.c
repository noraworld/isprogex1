#include <stdio.h>

#define NUMBER (5)
#define MAX_SCORE (100)
#define MIN_SCORE (0)

int max_of(int score[], int number);

double avg_of(int score[], int number);

int main(void) {

  int i;
  int english[NUMBER];
  int math[NUMBER];
  int max_e, max_m;
  double avg_e, avg_m;

  printf("%d人の点数を入力してください。\n\n", NUMBER);

  for (i=0; i < NUMBER; i++) {
    printf("[%d] 英語：", i+1);
    scanf("%d", &english[i]);
    printf("    数学：");
    scanf("%d", &math[i]);
  }

  max_e = max_of(english, NUMBER);
  avg_e = avg_of(english, NUMBER);

  max_m = max_of(math, NUMBER);
  avg_m = avg_of(math, NUMBER);

  printf("\n英語の最低点:%d\n", max_e);
  /*printf("英語の平均点:%5.1f\n\n", avg_e);*/

  /*printf("数学の最高点:%d\n", max_m);*/
  /*printf("数学の平均点:%5.1f\n\n", avg_m);*/

  return 0;
}

int max_of(int score[], int number) {

  int i;
  int max = MAX_SCORE;

  for (i = 0; i < number; i++)
    if (score[i] < max)
      max = score[i];

  return max;
}

double avg_of(int score[], int number) {

  int i;
  int sum = 0;
  double avg;

  for (i = 0; i < number; i++)
    sum += score[i];

  avg = (double)sum / number;

  return avg;

}
