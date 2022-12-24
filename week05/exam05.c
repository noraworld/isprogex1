#include <stdio.h>

int main(void)
{
    int i; /* 段のID */
    int block; /* 段を構成するの石の個数 */
    int remain; /* 残りの石の個数 */

    printf("王様，石の数は？: ");
    scanf("%d", &remain);

    i = 1; /* まずは1段目に初期値を設定 */
    block = 1; /* 1段目を作るには1個の石が必要 */
    while(remain >= block) { /* 次の段を作れるかぎりループ */
      i = remain - block;
      i++;
    }
    printf("その数の石でできるピラミッドは%d段で，石は%d個残ります\n",
	   i, remain);
    return 0;
}
