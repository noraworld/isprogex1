#include<stdio.h>
#define MAX_STRING (256)

int main(void) {

  char in_str[MAX_STRING];
  char out_str[MAX_STRING];

  printf("文字列を入力してください(最大 %d文字): ", MAX_STRING-1);
  gets(in_str);

  /* in_strの文字数をカウントする */
  int count = 0; /* 文字数を設定 */
  while (in_str[count])
    count++;

  /* out_strの先頭から順に、out_strの末尾からの文字を一つずつ代入する */
  int i;
  int k = count-1;
  for (i = 0; i < count; i++) {
    out_str[i] = in_str[k];
    k--;
  }
  out_str[count] = '\0'; /* out_strの末尾にナル文字を追加 */

  printf("%sを逆順にすると%sです.\n", in_str, out_str);

  return 0;
}
