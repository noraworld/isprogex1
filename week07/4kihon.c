#include <stdio.h>
#include <stdlib.h>

#define UNPLACED (-1)
#define EDGE_TILES (3)
#define NUM_TILES (EDGE_TILES * EDGE_TILES)

int put_germ(int size);
int put_foot(int size, int already);
int check_position(int left, int size, int already);
int judge_infection(int left, int right, int germ);
void draw_feet(int left, int right, int germ);
void draw_line(void);
void fill_position(int row, int left, int right, int germ);

int main(void)
{
  int germ;
  int left, right;

  germ = put_germ(NUM_TILES);
  printf("左足 ");
  left = put_foot(NUM_TILES, UNPLACED);
  printf("右足 ");
  right = put_foot(NUM_TILES, left);
  if (judge_infection(left, right, germ) == 1)
    printf("感染してしまいました. ");
  else
    printf("無事です。");
  printf("細菌はタイル %d にいました。\n", germ);
  draw_feet(left, right, germ);

  return 0;
}

int put_germ(int size)
{
  char key;
  int location;

  printf("1文字入力：");
  scanf("%c", &key); /* 入力される1文字を取得 */
  printf("入力文字は16進数で表現すると 0x%x で、これをもとに細菌の位置を決定\n", key);
  srand((unsigned int)key); /* 乱数の種を設定 */
  location = rand() % size + 1; /* 乱数を発生させ、位置が1から4になるように計算 */
  return location;
}

int put_foot(int size, int already)
{
  int position;

  do {
    printf("位置[1-%d]: ", size);
    scanf("%d", &position);
  } while (check_position(position, size, already) == 0);
  return position;
}

int check_position(int foot, int size, int already)
{
  if ((foot < 1) || (foot > size)) {
    printf("足が置けるタイルは 1 から %d です。\n", size);
    return 0;
  } else if (already == foot) {
    printf("タイル %d にはすでに別の足が置かれています。\n", already);
    return 0;
  } else
    return 1;
}

int judge_infection(int left, int right, int germ)
{
  if ((germ - left) * (germ - right) == 0)
    return 1;
  else
    return 0;
}
/*
if((germ - left) * (germ -right) == 0)について
制御式は、germ - left == 0 または germ - right == 0 を満たせばよい。
つまり、germ == left または　germ == right を満たせばよい。
これは、片足どちらか(left, right)と、細菌(germ)が一致しているかを判定している。
よって、この式で感染の有無を判定できる。
 */

void draw_feet(int left, int right, int germ)
{
  int i;

  for (i = 1; i <= EDGE_TILES; i++) {
    draw_line();
    printf("\n");
    fill_position(i, left, right, germ);
    printf("\n");
  }
  draw_line();
  printf("\n");

  return;
}

void draw_line(void)
{
  printf("+-+-+-+");
  return;
}

void fill_position(int row, int left, int right, int germ)
{
  printf("|");

  if (left == 3*row-2)
    printf("L");
    else if (right == 3*row-2)
      printf("R");
    else if (germ == 3*row-2)
      printf("@");
    else
      printf("%d", 3*row-2);

  printf("|");

  if (left == 3*row-1)
    printf("L");
    else if (right == 3*row-1)
      printf("R");
    else if (germ == 3*row-1)
      printf("@");
    else
      printf("%d", 3*row-1);

  printf("|");

  if (left == 3*row)
    printf("L");
    else if (right == 3*row)
      printf("R");
    else if (germ == 3*row)
      printf("@");
    else
      printf("%d", 3*row);

  printf("|");

  return;
}
