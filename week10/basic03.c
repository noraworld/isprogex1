#include<stdio.h>

int main(void) {

  char str[3][256];
  int i;
  int j;
  int k;

  /* 文字を入力 */
  for (i = 0; i < 2; i++) {
    printf("%dつめの文字列を入力してください(最大 255文字): ", i+1);
    gets(str[i]);
  }

  /* 1つめの文字列を3つめの文字列に複製 */
  j = 0;
  while (str[0][j]) {
    str[2][j] = str[0][j];
    j++;
  }

  /* 2つめの文字列を3つめの文字列の続きに複製 */
  k = 0;
  while (str[1][k]) {
    str[2][j] = str[1][k];
    j++;
    k++;
  }
  str[2][j] = '\0'; /* 連結の最後にナル文字を追加 */

  /* 文字を表示 */
  for (i = 0; i < 2; i++)
    printf("%dつめの文字列は%sでした.\n", i+1, str[i]);
  printf("連結された文字列は%sです.\n", str[2]);

  return 0;
}
