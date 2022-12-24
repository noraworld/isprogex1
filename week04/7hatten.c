#include<stdio.h>

int main(void)
{
  int first_day; /* 1日の曜日 */
  int last_date; /* 月末の日付 */
  int first_date; /* 1日まで空白を空けるためのループカウンタ */
  int pluser; /* 日付を表示する変数および表示するためのループカウンタ */

  do {
    printf("1日の曜日は？： 日(1)　月(2)　火(3)　水(4)　木(5)　金(6)　土(7)：");
    scanf("%d", &first_day);
  } while ((first_day < 1) || (first_day > 7)); /* 1～7以外は再入力 */

  do {
    printf("月末の日付は？： 28日以上、31日以下：");
    scanf("%d", &last_date);
  } while ((last_date < 28) || (last_date > 31)); /* 28～31以外は再入力 */

  putchar('\n'); /* 改行 */
  printf(" SUN MON TUE WED THU FRI SAT\n"); /* 曜日名 */

  for ((first_date = 1) ; (first_date <= first_day - 1) ; (first_date++)) {
    printf("    ");
  } /* 1日までの空白 */

  for ((pluser = 1) ; (pluser <= last_date) ; (pluser++)) {
    printf("%4d", pluser);
  if ((pluser + first_day - 1) % 7 == 0) /* 土曜日まで来ると…… */
    putchar('\n'); /* 改行 */
  } /* 日付を表示 */

  pluser--; /* デクリメント */
  if ((pluser + first_day - 1) % 7)
    putchar('\n'); /* 最週末の改行調整 */

  return 0;
}
