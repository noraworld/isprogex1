#include<stdio.h>

int main(void)
{
  int n;
  int line_num;
  int ast_num;
  int ast;

  printf("正の整数：");
  scanf("%d", &n);

  if (n <= 0) {
    printf("正の整数ではありません。\n");
    return 1;
  }

  for (line_num = 1 ; line_num <= n ; line_num++) {
    ast_num = n + 1 - line_num;
    printf("%d ", line_num);
    for (ast = 1 ; ast <= n - ast_num ; ast++)
      printf(" ");
    for(ast = 1 ; ast <= ast_num ; ast++)
      printf("*");
    printf("\n");
  }

  return 0;
}
