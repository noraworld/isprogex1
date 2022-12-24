#include <stdio.h>
#include <stdlib.h>

#define UNPLACED (-1)
#define EDGE_TILES (2)
#define NUM_TILES (EDGE_TILES * EDGE_TILES)

int put_germ(int size);
int put_foot(int size, int already);
int check_position(int left, int size, int already);
int judge_infection(int left, int right, int germ);

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
