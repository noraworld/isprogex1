#include<stdio.h>
#include<string.h>

int main(void) {

  char str[5][256];
  char all[1280] = "";
  char *fastest;
  int len[5];
  int i;
  fastest = &str[0][0];

  for (i = 0; i < 5; i++) {
    printf("%d行目の文字列を入力してください(最大 255文字): ", i+1);
    gets(str[i]);
    len[i] = (int)strlen(str[i]);
    fastest = (strcmp(fastest, str[i]) < 0)? fastest: &str[i][0];
    strcat(all, str[i]);
  }

  for (i = 0; i < 5; i++)
    printf("%d行目の文字列は%sで, 文字数は%dです.\n", i+1, str[i], len[i]);
  printf("辞書順で最も早いのは%sです.\n", fastest);
  printf("全て連結された文字列は%sです.\n", all);

  return 0;

}
