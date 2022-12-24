#include<stdio.h>

int main(void)
{
  int no, i, j, count;
  i = 1;
  j = 1;
  count = 0;

  printf("王様、石の数は？：");
  scanf("%d", &no);

  while (i <= no) {
    no -= i;
    j += 2;
    i += j;
    count++;
  }
  /*
与えられた数(no)を1, 4, 9, ... と減らしていき、noが減らし子(i)よりも
小さくなる、または同じになるまでループを繰り返す。ピラミッドの段数はwhile文を
何回ループさせたかで求めている(count)。
  */

  printf("その数の石でできるピラミッドは%d段で、石は%d個残ります。\n", count, no);

  return 0;
}
