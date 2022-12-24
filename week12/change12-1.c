#include<stdio.h>
#define ARRAY_SIZE (128)

int is_vowel(char x);
void set_character(char *target, int position, char x);

int main(void) {

  char original[ARRAY_SIZE];
  char target[ARRAY_SIZE];
  char *ptr;
  int count;

  printf("文字列は？ ");
  gets(original);

  count = 0;
  for (ptr = original; *ptr != '\0'; ptr++) {
    if (is_vowel(*ptr)) {
      set_character(target, count, *ptr);
      count++;
      set_character(target, count, *ptr);
      count++;
      // set_character(target, count, '-');
      // count++;
    } else {
      set_character(target, count, *ptr);
      count++;
    }
  }
  set_character(target, count, '\0');

  printf("結果の文字列は %s\n", target);

  return 0;
}


int is_vowel(char x) {

  switch(x) {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    return 1;
  break;
  default:
    return 0;
    break;
  }
}


void set_character(char *target, int position, char x) {

  *(target + position) = x;
}
