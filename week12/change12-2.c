#include<stdio.h>
#include<string.h>
#define ARRAY_SIZE (512)

int compare(char *first, char *second);

int main(void) {
  char first[ARRAY_SIZE];
  char second[ARRAY_SIZE];
  int result;

  printf("最初の英単語は？ ");
  gets(first);
  printf("2番目の英単語は？ ");
  gets(second);

  result = compare(first, second);
  printf("compareの比較結果は %d\n", result);
  printf("strcmp の比較結果は %d\n", strcmp(first, second));

  return 0;
}


int compare(char *first, char *second) {

  char *left;
  char *right;
  int diff;

  left = first;
  right = second;

  while (*left != '\0') {
    if (*right == '\0')
      return *left;
    diff = *left - *right;
    if (diff != 0)
      return diff;
    left++;
    right++;
  }
  if (*right == '\0')
    return 0;
  else
    return 0 - *right;
}
