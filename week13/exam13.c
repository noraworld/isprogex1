#include <stdio.h>
#include <string.h>

#define MAX_LINE (5)
#define MAX_COLUMN (256)
#define MAX_STRING (1028)

int main(void)
{
  char str[MAX_LINE][MAX_COLUMN];
  int earliest; /* 辞書順で最早の文字列のインデックス */
  int i;
  char all[MAX_STRING] = "";

  for(i = 0; i < MAX_LINE; i++) {
    printf("%d行めの文字列を入力してください(最大 %d文字): ",
	   i+1, MAX_COLUMN - 1);
    /* キーボードからの文字列を配列に格納する */
    gets(str[i]);
  }

  earliest = 0;
  for(i = 0; i < MAX_LINE; i++) {
    printf("%d行めの文字列は%sで文字数は%2d文字です．\n",
	   i+1, str[i], strlen(str[i]) );
    /* これまでの最早のものより今回の文字列の方が辞書順で早いなら */
    if(strcmp(str[earliest], str[i]) > 0) {
      earliest = i;
    }
    /* 今回の文字列をallの末尾につなげる */
    strcat(all, str[i]);
  }
  printf("辞書順で最も早いのは%sでした．\n", str[earliest]);
  printf("全て連結された文字列は%sです．\n", all);

  return 0;
}
