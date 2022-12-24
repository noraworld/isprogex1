#include <stdio.h>
#include <ctype.h>

#define STRING_SIZE (256)
#define ALPHABET_SIZE (26)

void count_chars(char str[], int cnt[]);

int main(void)
{
  char array[STRING_SIZE];
  int alphabet[ALPHABET_SIZE]={0};
  int index;

  printf("文字列は?: ");
  /* 文字列入力 */
  gets(array);

  count_chars(array, alphabet);

  for(index = 0; index < ALPHABET_SIZE; index++)
    printf("%cは%d文字ありました\n", 'A'+index, alphabet[index]); 

  return 0;
}

void count_chars(char str[], int cnt[])
{
  int position;
  char target;

  position = 0;
  while(str[position] != '\0') {
    if((str[position] >= 'a') && (str[position] <= 'z')) 
      /* 大文字に変換 */
      str[position] = toupper(str[position]);

    target = str[position];
    if((target >= 'A') && (target <= 'Z')) 
      cnt[ target - 'A' ]++;

    position++;
  }
}
