#include<stdio.h>

int main(void)
{
  int side1, side2, side3, tmp;
/*変数の定義。side1, side2, side3 は３辺の値を格納する変数。
　tmp は大きい順に並び替えるときの一時保存用各の格納変数。*/


  puts("３辺の長さを整数で入力してください。"); /*３辺の入力を求める旨*/

  printf("１辺目："); /*１辺目の入力を求める旨*/
  scanf("%d", &side1); /*１辺目を読み込む*/

  printf("２辺目："); /*２辺目の入力を求める旨*/
  scanf("%d", &side2); /*２辺目を読み込む*/

  printf("３辺目："); /*３辺目の入力を求める旨*/
  scanf("%d", &side3); /*３辺目を読み込む*/

/*↓入力された３つの値を大きい順に入れ替える*/

  if (side1 < side2) {
    tmp = side1;
  side1 = side2;
  side2 = tmp;
  }

  if (side2 < side3) {
    tmp = side2;
  side2 = side3;
  side3 = tmp;
  }

  if (side1 < side2) {
    tmp = side1;
  side1 = side2;
  side2 = tmp;
  }

  if (side1 >= side2 + side3) {
    printf("３辺 %d, %d, %d は、三角形をつくりません。\n", side1, side2, side3); return 0;
  } /*他の２辺の和より最大辺が大きいとき*/

  if ((side1 * side1) > (side2 * side2) + (side3 * side3))
    printf("３辺 %d, %d ,%d は、鈍角三角形です。\n", side1, side2, side3);
 /*他の２辺の２乗の和より最大辺の２乗が大きいとき*/

  else if ((side1 * side1) == (side2 * side2) + (side3 * side3))
    printf("３辺 %d, %d ,%d は、直角三角形です。\n", side1, side2, side3);
 /*他の２辺の２乗の和と最大辺の２乗が等しいとき*/

  else if ((side1 * side1) < (side2 * side2) + (side3 * side3))
    printf("３辺 %d, %d ,%d は、鋭角三角形です。\n", side1, side2, side3);
 /*他の２辺の２乗の和が最大辺の２乗より大きいとき*/

  if (side1 == side3) {
    puts("さらに正三角形です。"); return 0;
} /*すべての辺が等しいとき*/

  if ((side1 == side2) || (side2 == side3))
    puts("さらに二等辺三角形です。");
 /*２辺が等しいとき*/

  return 0;
}
