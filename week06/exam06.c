#include<stdio.h>

int main(void)
{
	int a[6] = {10,20,30,40,50,60};	/*配列に6個の数字を入れる*/
	int i;				/* ループカウンタ */
	int buffer1;		/* 計算の途中結果を格納する変数 */
	double buffer2;		/* 計算の途中結果を格納する変数 */
	double mean;		/* 平均値 */
	double variance;	/* 分散 */
	int start = 0, end;	/*計算に参加する配列の先頭要素と最後尾要素の番号を格納する変数*/
		
	buffer1 = 0;		/* 平均値の計算用のバッファを初期化 */
	
	while(1){
		printf("計算の対象とする配列の最後尾要素は何番目？");
		scanf("%d", &end);
		if(end >= 0 && end <= 5)
		break;
	}
	
	for(i= start; i <= end; i++){/*指定した先頭要素から最後尾要素まで*/
		buffer1 += a[i];   	/* 値を合計する */
	}
	
	mean = buffer1 / (end - start + 1);	/* 平均値を計算する．要素の総数はend-start+1である．*/
	
	buffer2 = 0.0;	/*分散の計算用のバッファを初期化 */
	
	for(i = start; i <= end; i++){	/*最初の数字から最後まで*/
		buffer2 += (a[i] - mean) * (a[i] - mean);	/* 各値と平均値との差の自乗和を計算する */
	}	
	
	variance = buffer2 / (end - start + 1);		/* 分散を計算する */
		
	printf("平均は%4.1f\n", mean);		/*平均値を画面に印字*/
	printf("分散は%4.1f\n", variance);	/*分散を画面に印字*/
		
	return 0;
}
