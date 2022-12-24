#include<stdio.h>
#include<math.h>

typedef struct {
  int x;
  int y;
} position;

typedef struct {
  position pos;
  double fuel;
} car;

int move(car *c, int dx, int dy) {

  double dist;

  dist = sqrt(dx*dx+dy*dy);
  if (dist > (*c).fuel) {
    return 1;
  } else {
    (*c).pos.x += dx;
    (*c).pos.y += dy;
    (*c).fuel -= dist;
    return 0;
  }
}


int main(void) {

  car c = {
    {2, 3},
    10.0,
  };

  int dx, dy;

  printf("x方向に進む距離: ");
  scanf("%d", &dx);
  printf("y方向に進む距離: ");
  scanf("%d", &dy);

  if (!move(&c, dx, dy)) {
    printf("残燃料量: %f\n", c.fuel);
    printf("到達地点の座標: (%d, %d)\n", c.pos.x, c.pos.y);
  } else {
    printf("燃料が足りません!\n");
  }

  return 0;
}
