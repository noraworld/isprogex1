#include<stdio.h>
#include<string.h>

int main(void) {

  char str[5][256];
  int order[5] = {0, 1, 2, 3, 4};
  int i;
  int j;

  for (i = 0; i < 5; i++) {
    printf("%d行目の文字列を入力してください(最大 255文字): ", i+1);
    gets(str[i]);
  }

  for (i = 0; i < 4; i++) {
    for (j = 1; j < 5 - i; j++)
      if (strcmp(str[order[j-1]], str[order[j]]) > 0) {
       	int temp = order[j-1];
	order[j-1] = order[j];
	order[j] = temp;
      }
  }

  printf("辞書順に並び替えると\n");
  for (i = 0; i < 5; i++)
    printf("%s\n", str[order[i]]);

  return 0;

}
