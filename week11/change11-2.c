#include<stdio.h>
#define BUFFER_SIZE (256)

void playerTurn(int *x, int max);
void aiTurn(int *x, int max);


int main(void) {

  int x = 50;
  int *x_add = &x;
  int max = 8;
  char buf[BUFFER_SIZE];

  while (x > 0) {
    playerTurn(x_add, max);

    if (x <= 0) {
      printf("数値が0以下になったのであなたの負けです\n");
      break;
    }

    aiTurn(x_add, max);

    if (x <= 0) {
      printf("数値が0以下になったのであなたの勝ちです\n");
      break;
    }
  }

  return 0;
}


void playerTurn(int *x, int max) {

  int input;

  printf("現在の数値は%dです。減らす数を入力してください (1以上%d以下です) \n", *x, max);
  scanf("%d", &input);

  *x -= input;
  printf("あなたが入力した数値は%dです。現在の数値は%dです。\n", input, *x);
}


void aiTurn(int *x, int max) {

  int input;
  
  switch (*x % max) {
  case 0 : input = max - 1; break;
  case 1 : input = max; break;
  default : input = (*x % max) - 1; break; 
  }  

  *x -= input;

  printf("aiが入力した数値は%dです。現在の数値は%dです。\n", input, *x);
}
