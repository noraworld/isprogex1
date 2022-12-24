#include<stdio.h>

int main(void) {

  char str[5][256];
  int i;

  for (i = 0; i < 5; i++) {
    printf("%d行めの文字列を入力してください(最大 255文字): ", i+1);
    gets(str[i]);
  }

  printf("最も長かったのは%d行めの%sでした.\n", longest(str)+1, str[longest(str)]);

  return 0;
}


int longest(char str[5][256]) {

  int i;
  int j;
  int count[5] = {0};
  int dest = 0;
  int result = 0;

  /* 各文字列の長さを測定 */
  for (i = 0; i < 5; i++) {
    j = 0;
    while (str[i][j]) {
      count[i]++;
      j++;
    }
  }

  /* 一番長かった行番号を記録 */
  for (i = 0; i < 5; i++)
    if (count[i] > dest) {
      dest = count[i];
      result = i;
    }

  return result;
}
