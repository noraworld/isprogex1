#include<stdio.h>
#include<string.h>

int main(void) {

  char *ptr[3] = {"BKC", "NojiHigashi", "Kusatsu"};
  char str[3][16];
  int i;

  for (i = 0; i < 3; i++) {
    strcpy(str[i], ptr[i]);
    printf("%dつめの文字列%sをコピーしました.\n", i+1, str[i]);
  }

  printf("strの文字列が占める領域は%d\n", &str[2][15] - &str[0][0] + 1);
  printf("ptrの文字列が占める領域は%d\n", &ptr[2][strlen(ptr[2])] - &ptr[0][0] + 1);

  return 0;
}
