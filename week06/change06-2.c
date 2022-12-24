#include <stdio.h>
#define MAX_SEAT (9)

int main(void) {

  int seat_no[MAX_SEAT] = {1, 5, 8, 10, 15, 20, 22, 25, 30};
  double point[MAX_SEAT][2] = {
    {1.1, 5.2},
    {3.4, 1.6},
    {4.5, 3.4},
    {2.3, 2.6},
    {6.4, 5.7},
    {5.2, 4.4},
    {1.7, 3.5},
    {3.8, 6.3},
    {5.8, 6.3}};
  double x_dis, y_dis;
  double dis;
  double max_dis = 0.0;
  int max_dis_seat[2];
  int i, j;

  printf("もっとも離れた２つの座席を探します。\n\n");

  for (i = 0; i < MAX_SEAT -1; i++) {
    for (j = i+1; j < MAX_SEAT -1; j++) {
      x_dis = point[i][0] - point[j][0];
      y_dis = point[i][1] - point[j][1];
      dis = x_dis * x_dis + y_dis * y_dis;

      if (max_dis < dis) {
	max_dis = dis;
	max_dis_seat[0] = seat_no[i];
	max_dis_seat[1] = seat_no[j];
      }
    }
  }

  printf("２つの座席はNo.%dとNo.%dです。距離の２乗は%1.1fです。\n",
	 max_dis_seat[0], max_dis_seat[1], max_dis);

  return 0;
}
