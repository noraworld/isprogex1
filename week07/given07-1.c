#include <stdio.h>

#define UNPLACED (-1)
#define EDGE_TILES (2)
#define NUM_TILES (EDGE_TILES * EDGE_TILES)

int put_germ(int size)
{
  char key;
  int location;

  printf("1文字入力：");
  scanf("%c", &key);
  printf("入力文字は16進数で表現すると 0x%x で、これをもとに細菌の位置を決定\n", key);
  location = key % size + 1;
  return location;
}

int put_foot(int size, int already)
{
  int position;

  if (already == UNPLACED)
    position = 1;
  else
    position = 2;

  printf("タイル%d\n", position);

  return position;
}

int judge_infection(int left, int right, int germ)
{
  if ((germ - left) * (germ - right) == 0)
    return 1;
  else
    return 0;
}

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
