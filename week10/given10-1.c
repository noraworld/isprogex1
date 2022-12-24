#include<stdio.h>
#define ARRAY_SIZE (128)

int is_vowel(char x);
void set_character(char target[], int position, char x);

int main(void) {

  char original[ARRAY_SIZE];
  char target[ARRAY_SIZE];
  int index;
  int count;

  printf("文字列は？　");
  scanf("%s", original);

  count = 0;
  for(index = 0; index < ARRAY_SIZE; index++) {
    if(original[index] == '\0') {
      target[count] = '\0';
      break;
    } else if(is_vowel(original[index]) ) {
      set_character(target, count, '-');
      count++;
      set_character(target, count, original[index]);
      count++;
      set_character(target, count, '-');
      count++;
    } else {
      set_character(target, count, original[index]);
      count++;
    }
  }
  printf("結果の文字列は%s\n", target);

  return 0;
}


int is_vowel(char x) {

  switch( x ) {
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


void set_character(char array[], int position, char x) {

  if(position >= 0 && position < ARRAY_SIZE)
    array[position] = x;
}
