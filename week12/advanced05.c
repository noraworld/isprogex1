// strcmp(早, 遅) → マイナス
// strcmp(遅, 早) → プラス
// ※strncmpも同様

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int wordsearch(char mes[], char word[], int len);

int main(void) {

  char mes[10001];
  char word[256];
  int len;

  printf("文章を入力してください(最大 10000文字): ");
  gets(mes);
  printf("検索する単語を入力してください(最大 255文字): ");
  gets(word);
  switch (wordsearch(mes, word, len)) {
  case -1 : printf("単語%sは見つかりませんでした.\n", word); break;
  default : printf("単語%sは%d文字目に見つかりました.\n", word, wordsearch(mes,word, len)); break;
  }

  return 0;

}


int wordsearch(char mes[], char word[], int len) {

  char *ret;

  if ((ret = strstr(mes, word)) != NULL) {
    len = (ret - mes + 1);
  } else {
    len = -1;
  }

  return len;

}
