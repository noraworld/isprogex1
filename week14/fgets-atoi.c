#include<stdio.h>
#include<ctype.h>
#define STR_SIZE (256)
#define SUCCESS (0)
#define FALSE (-1)

int main(void) {

  char str[STR_SIZE];
  int num;
  int i;

  printf("数字を入力してください: ");
  fgets(str, sizeof(str)-1, stdin);

  i = 0;
  while (str[i] != '\n')
    i++;
  str[i] = '\0';

  i = 0;
  if (str[0] == '-')
    i++;

  while (str[i] != '\0') {
    if (isdigit(str[i]) == 0) {
      printf("不正な入力です.\n");
      return FALSE;
    }
    i++;
  }

  num = atoi(str);

  printf("入力された数字は%dです.\n", num);

  return SUCCESS;
}
