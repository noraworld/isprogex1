#include <stdio.h>

#define NUMBER (5)
#define CLASS (4)

int main(void)
{

  int score[NUMBER][CLASS] = {
    {85, 74, 63, 90},
    {78, 65, 70, 62},
    {89, 92, 88, 76},
    {32, 48, 66, 25},
    {92, 76, 81, 98}
  };
  int i, j; /* for文用のカウンタ変数 */
  int sum; /* 点数の合計を代入する変数 */
  double average; /* 平均点を代入する変数 */

  /* 各科目の平均点を算出し，出力する */
  for(i = 0; i < CLASS; i++) {
    sum = 0;
    for(j = 0; j < NUMBER; j++) {
      sum += score[j][i];
    }
    average = (double)sum/NUMBER;
    switch (i)
      {
      case 0:
	printf("国語の平均点は%5.1fです．\n", average);
	break;
      case 1:
	printf("数学の平均点は%5.1fです．\n", average);
	break;
      case 2:
	printf("理科の平均点は%5.1fです．\n", average);
	break;
      case 3:
	printf("社会の平均点は%5.1fです．\n", average);
	break;
      default:
	break;
      }
    
  }
  /* 各人の平均点を算出し，出力する */
  for(i = 0; i < NUMBER; i++) {
    sum=0;
    
    for(j = 0; j < CLASS; j++) 
      sum += score[i][j];
   
    average=(double)sum/CLASS;
    
    printf("番号%dの学生の平均点は%5.1fです．\n", i+1, average);
  }
  
  return 0;
}
