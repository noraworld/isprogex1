#include<stdio.h>
#define MAX_STRING (256)

unsigned count_string(char string[]);

int main(void) {

  char string[MAX_STRING];

  printf("文字列を入力してください(最大 %d): ", MAX_STRING-1);
  gets(string);
  printf("入力された文字列は %s です. 文字列は %u文字です.\n", string, count_string(string));

  return 0;
}


unsigned count_string(char string[]) {

  unsigned i = 0;

  while (string[i])
    i++;

  return i;
}
