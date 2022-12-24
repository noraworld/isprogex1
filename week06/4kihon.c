#include <stdio.h>
#define STUDENT (5) /* 生徒数 */
#define SUBJECT (4) /* 教科数 */

int main(void) {

  /* 点数を代入する二次元配列 */
  int score[STUDENT][SUBJECT] = {
    {85, 74, 63, 90},
    {78, 65, 70, 62},
    {89, 92, 88, 76},
    {32, 48, 66, 25},
    {92, 76, 81, 98},
  };
  double sum_subject[SUBJECT] = {0}; /* 教科の合計点 */
  double ave_subject[SUBJECT] = {0}; /* 教科の平均点 */
  double sum_student[STUDENT] = {0}; /* 生徒の合計点 */
  double ave_student[STUDENT] = {0}; /* 生徒の平均点 */
  int i, j;

  /* 各教科の平均点 */
  for (i = 0; i < SUBJECT; i++) {
    for (j = 0; j < STUDENT; j++)
      sum_subject[i] += score[j][i];
    ave_subject[i] = (double)(sum_subject[i] / STUDENT);
    switch (i) {
    case 0 : printf("国語の平均点は%.1fです。\n", ave_subject[i]); break;
    case 1 : printf("数学の平均点は%.1fです。\n", ave_subject[i]); break;
    case 2 : printf("理科の平均点は%.1fです。\n", ave_subject[i]); break;
    case 3 : printf("社会の平均点は%.1fです。\n", ave_subject[i]); break;
    default : break;
    }
  }

  /* 各学生の平均点 */
  for (i = 0; i < STUDENT; i++) {
    for (j = 0; j < SUBJECT; j++)
      sum_student[i] += score[i][j];
    ave_student[i] = (double)(sum_student[i] / SUBJECT);
    switch (i) {
    case 0 : printf("番号1の学生の平均点は%.1fです。\n", ave_student[i]); break;
    case 1 : printf("番号2の学生の平均点は%.1fです。\n", ave_student[i]); break;
    case 2 : printf("番号3の学生の平均点は%.1fです。\n", ave_student[i]); break;
    case 3 : printf("番号4の学生の平均点は%.1fです。\n", ave_student[i]); break;
    case 4 : printf("番号5の学生の平均点は%.1fです。\n", ave_student[i]); break;
    default : break;
    }
  }

  return 0;
}
