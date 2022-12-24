#include<stdio.h>

int str_copy_count(char *ptr_i, char *ptr_o, int len);

int main(void) {

  char str_i[256];
  char str_o[256];
  int len = 0;

  printf("文字列を入力してください(最大 255文字): ");
  gets(str_i);

  len = str_copy_count(str_i, str_o, len);

  printf("コピー前の配列str_iは%sです.\n", str_i);
  printf("コピー後の配列str_oは%sです.\n", str_o);
  printf("コピーした文字列は%d文字です.\n", len);

  return 0;
}


int str_copy_count(char *ptr_i, char *ptr_o, int len) {

  do {
    *ptr_o = *ptr_i;
    ptr_i++;
    ptr_o++;
    len++;
  } while (*ptr_i != '\0');

  *ptr_o = '\0';

  return len;
}
