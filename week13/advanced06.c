#include<stdio.h>
#define SUCCESS (1)

typedef struct {
  int base;
  int housing;
  int family;
} Salary;

typedef struct {
  int id;
  char name[20];
  int age;
  int year;
  Salary salary;
} Profile;


main() {

  int id_search;
  int i;

  Profile profile[5] = {
    {1001, "立命 五郎", 40, 20, 300000, 15000, 20000},
    {1002, "草津 太郎", 38, 18, 280000, 15000, 12000},
    {1003, "滋賀 次郎", 28,  5, 200000, 12000,     0},
    {1004, "衣笠 佳子", 26,  5, 200000, 15000, 12000},
    {1005, "茨木 三郎", 22,  2, 180000,  8000,     0},
  };

  printf("社員番号を入力してください: ");
  scanf("%d", &id_search);

  for (i = 0; i < 5; i++)
    if (id_search == profile[i].id) {
      printf("名    前: %s\n年    齢: %d歳\n勤続年数: %d年\n給    与: %d円\n", profile[i].name, profile[i].age, profile[i].year, (profile[i].salary.base)+(profile[i].salary.housing)+(profile[i].salary.family));
      id_search = SUCCESS;
      break;
    }

  if (id_search != SUCCESS)
    printf("該当者なし.\n");

  return 0;
}
