#include<stdio.h>
#include<string.h>

int main(void) {

  char str[3][16] = {"BKC", "NojiHigashi", "Kusatsu"};
  char input[3][256];
  char *ptr[3][16];
  int i;
  int j;

  for (i = 0; i < 3; i++) {
    printf("%dつめの文字列を入力してください(最大 15文字): ", i+1);
    gets(input[i]);
    strcpy(str[i], input[i]);
    printf("%d行目に%sをコピーしました.\n", i+1, str[i]);
  }

  printf("配列strの内容は");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 16; j++) {
      ptr[i][j] = &str[i][j];
      putchar(*ptr[i][j]);
      if (*ptr[i][j] == '\0')
	putchar('*');
    }
  putchar('\n');

  return 0;
}
