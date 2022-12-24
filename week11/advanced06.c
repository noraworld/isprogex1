#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define BUFFER_SIZE (256)

void playerTurn(int *x, int *y, int max);
void aiTurn(int *x, int *y, int max);


int main(void) {

  int x = 50;
  int y = 50;
  int *x_add = &x;
  int *y_add = &y;
  int max = 8;
  char buf[BUFFER_SIZE];

  printf("現在のXの値は%d, Yの値は%dです.\n", x, y);

  while (x > 0 || y > 0) {
    playerTurn(x_add, y_add, max);

    if (x <= 0 && y <= 0) {
      printf("数値が2つとも0以下になったのであなたの負けです.\n");
      break;
    }

    aiTurn(x_add, y_add, max);

    if (x <= 0 && y <= 0) {
      printf("数値が2つとも0以下になったのであなたの勝ちです.\n");
      break;
    }
  }

  return 0;
}


void playerTurn(int *x, int *y, int max) {

  int input;
  int dest;


  do {
    printf("Xを減らすなら1, Yを減らすなら2を入力してください: ");
    scanf("%d", &dest);
    if (*x <= 0 && dest == 1) {
      printf("Xは0以下なので, 減らすことができません. Yを減らします.\n");
      dest = 2;
      break;
    }
    if (*y <= 0 && dest == 2) {
      printf("Yは0以下なので, 減らすことができません. Xを減らします.\n");
      dest = 1;
      break;
    }
  } while (dest != 1 && dest != 2);

  if (dest == 1) {
    do {
      printf("Xを減らす数を入力(1以上%d以下): ", max);
      scanf("%d", &input);
    } while (input < 1 || input > max);
    *x -= input;
  }

  if (dest == 2) {
    do {
      printf("Yを減らす数を入力(1以上%d以下): ", max);
      scanf("%d", &input);
    } while (input < 1 || input > max);
    *y -= input;
  }

  printf("あなたが入力した数値は%dです. 現在のXの数値は%d, Yの数値は%dです.\n", input, *x, *y);
}


void aiTurn(int *x, int *y, int max) {

  int input;
  int dest;

  srand((unsigned)time(NULL));
  dest = rand() % 2 + 1;

  if (*x <= 0)
    dest = 2;

  if (*y <= 0)
    dest = 1;

  if (dest == 1) {
    switch ( (*x - 1) % (max + 1) ) {
    case 1 : input = 1; break;
    case 2 : input = 2; break;
    case 3 : input = 3; break;
    case 4 : input = 4; break;
    case 5 : input = 5; break;
    case 6 : input = 6; break;
    case 7 : input = 7; break;
    case 8 : input = 8; break;
    }
    *x -= input;
    printf("AIはXを%d減らしました. ", input);
  }


  if (dest == 2) {
    switch ( (*y - 1) % (max + 1) ) {
    case 1 : input = 1; break;
    case 2 : input = 2; break;
    case 3 : input = 3; break;
    case 4 : input = 4; break;
    case 5 : input = 5; break;
    case 6 : input = 6; break;
    case 7 : input = 7; break;
    case 8 : input = 8; break;
    }
    *y -= input;
    printf("AIはYを%d減らしました. ", input);
  }

  printf("現在のXの数値は%d, Yの数値は%dです.\n", *x, *y);
}
