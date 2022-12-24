#include<stdio.h>
#define STR_SIZE (256)

int main(void) {

  char str[STR_SIZE];
  int i = 0;

  printf("要素数は%dです. 文字列を入力してください: ", sizeof(str));
  fgets(str, sizeof(str), stdin);

  do {
    if (str[i] == 10) // 10はASCIIコードで改行を表す
      str[i] = '\0';  // 改行コードをナル文字で上書きする
    i++;
  } while (str[i] != '\0'); // ナル文字が来るまでループ

  printf("入力された文字列は%sです.\n", str);


  return 0;
}
