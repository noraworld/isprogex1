#include<stdio.h>
#define STUDENT_MAX (128)

typedef struct {
  int number;
  float english;
  float mathmatic;
  float japanese;
} Results;

main() {

  Results student[STUDENT_MAX];
  int student_number = -1;

  do {
    student_number++;
    printf("学生番号を入力してください: ");
    scanf("%d", &student[student_number].number);
    if (student[student_number].number != 0) {
      do {
	printf("英語の得点を入力してください: ");
	scanf("%f", &student[student_number].english);
      } while (student[student_number].english < 0 || student[student_number].english > 100);
      do {
	printf("数学の得点を入力してください: ");
	scanf("%f", &student[student_number].mathmatic);
      } while (student[student_number].mathmatic < 0 || student[student_number].mathmatic > 100);
      do {
	printf("国語の得点を入力してください: ");
	scanf("%f", &student[student_number].japanese);
      } while (student[student_number].japanese < 0 || student[student_number].japanese > 100);
    }
  } while (student[student_number].number != 0);


  int i;
  Results sum = {0, 0, 0, 0};
  for (i = 0; i < student_number; i++) {
    sum.english += student[i].english;
    sum.mathmatic += student[i].mathmatic;
    sum.japanese += student[i].japanese;
  }

  Results ave;
  ave.english = sum.english / student_number;
  ave.mathmatic = sum.mathmatic / student_number;
  ave.japanese = sum.japanese / student_number;

  printf("英語の平均点は%.1f点です.\n", ave.english);
  printf("数学の平均点は%.1f点です.\n", ave.mathmatic);
  printf("国語の平均点は%.1f点です.\n", ave.japanese);

  return 0;
}
