#include<stdio.h>
#include<ctype.h> // isdigitを使用するために必要
#define STR_SIZE (64)

main() {

  char str[STR_SIZE];
  int i = 0;

  printf("文字か数字を入力してください: ");
  fgets(str, STR_SIZE, stdin);

  while (str[i]) {
    if (isdigit(str[i]))
      printf("%2d文字目は数字です.\n", i+1);
    else
      printf("%2d文字目は文字です.\n", i+1);
    i++;
  }

  return 0;
}
