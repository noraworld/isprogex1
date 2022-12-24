#include<stdio.h>
#define ARRAY_SIZE (3)
#define STRING_SIZE (256)

int main(void) {

  char str[ARRAY_SIZE][STRING_SIZE];
  int i;

  for(i = 0; i < ARRAY_SIZE; i++) {
    printf("%dつめの文字列を入力してください(最大 %d文字): ", i+1, STRING_SIZE-1);
    gets(str[i]);
  }

  unsigned len;
  for(i = 0; i < ARRAY_SIZE; i++) {
    len = 0;
    while(str[i][len])
      len++;
    printf("%dつめに入力された文字列は%sです. 文字数は %uです.\n", i+1, str[i], len);
  }

  return 0;
}
