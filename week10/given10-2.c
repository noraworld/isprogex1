#include<stdio.h>
#define ARRAY_SIZE (16)
#define STRING_SIZE (128)

int is_specified(char target);

int main(void) {

  char array[ARRAY_SIZE][STRING_SIZE];
  int position;
  int index;
  int count;
  char target;

  for(index = 0; index < ARRAY_SIZE; index++) {
    printf("%d個目の文字列は？ ", index+1);
    gets(array[index]);
    if(array[index][0] == '\0')
      break;
  }

  printf("数字を数えます\n");
  index = 0;
  while(array[index][0] != '\0') {
    count = 0;
    position = 0;
    while((target = array[index][position]) != '\0') {
      if(is_specified(target))
	count++;
      position++;
    }
    printf("%d個目の文字列%sには%d個\n", index+1, array[index], count);
    index++;
  }
  return 0;
}



int is_specified(char target) {

    if((target >= '0') && (target <= '9'))
    return 1;
  else
    return 0;
}
