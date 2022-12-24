#include<stdio.h>
#include<ctype.h>

void count_chars(char str[], int cnt[]);

int main(void) {

  char str[256];
  int cnt[26] = {0};
  char i;
  int j = 0;

  printf("文字列を入力してください(最大 255文字): ");
  gets(str);

  count_chars(str, cnt);

  /* 関数で計算した結果をここで表示 */
  for (i = 'A'; i <= 'Z'; i++) {
    putchar(i);
    printf("は%d文字ありました.\n", cnt[j]);
    j++;
  }

  return 0;
}



void count_chars(char str[], int cnt[]) {

  /* 小文字は大文字に変換 */
  unsigned i = 0;
  while (str[i]) {
    str[i] = toupper(str[i]);
    i++;
  }

  int j = 0;
  int l = -1;
  char k;

  /* 各英字の文字数を計算 */
  while (str[j]) {
    for (k = 'A'; k <= 'Z'; k++) {
      l++;
      if (str[j] == k) {
	cnt[l]++;
	l = -1;
	break;
      }
    }
    j++;
  }

  return;
}
