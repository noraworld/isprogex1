#include<stdio.h>
#include<time.h>


void get_data(char data_file[]) {

  FILE *fp;
  if ((fp = fopen(data_file, "r")) == NULL) {
    printf("本プログラムを実行するのは初めてですね.\n"); /* datatime.datがなかったとき */
  } else {
    int hour, minute, second;

    fscanf(fp, "%d%d%d", &hour, &minute, &second); /* datatime.datから時分秒を読み取る */
    printf("前回は%d時%d分%d秒でした.\n", hour, minute, second);
    fclose(fp);
  }
}


void put_data(char data_file[]) {

  FILE *fp;
  time_t t; /* 現在の暦時刻を返す関数 */
  struct tm *local; /* 暦時刻を保持するための要素別の時刻と呼ばれる構造体 */

  time(&t);
  local = localtime(&t);

  if ((fp = fopen(data_file, "w")) == NULL)
    printf("ファイルをオープンできません.\n"); /* datatime.datがない場合は作成されるので、これが実行されることはたぶんない */
  else {
    fprintf(fp, "%d %d %d\n", local->tm_hour, local->tm_min, local->tm_sec); /* localtime関数を使って前回の実行時刻を書き込む */
    fclose(fp);
  }
}


main() {

  char data_file[] = "datatime.dat"; /* datatime.datを配列として定義する(このデータファイルには時分秒のデータが格納されている) */
  get_data(data_file);
  put_data(data_file);

}
