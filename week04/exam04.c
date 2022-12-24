#include <stdio.h>

int main(void)
{
  int month;
  
  printf("何月ですか: ");
  scanf("%d", &month);

  
	
  if (month>=3 && month<=5) {
    printf("春です. \n");
  }
  else if (month>=6 && month<=8) {
    printf("夏です．\n");
  } else if (month>=9 && month<=11) {
    printf("秋です．\n");
  }  
  else if (month==12 || month==1 || month==2)
    printf("冬です. \n");

  else {
    printf("そんな月はありませんよ!!\n");
  } 

  return 0;
}
