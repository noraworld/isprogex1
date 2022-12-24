#include<stdio.h>
#include<stdlib.h>
#define MAX_ID (1000)
#define BUF_SIZE (256)
#define SUCCESS (0)
#define FALSE (1)

typedef struct {
  int idnum;
  char name[100];
  char gen;
  double eng;
  double math;
} data;

main() {

  FILE *dfp;
  FILE *bfp;
  char filename[21];
  data yomikomi[MAX_ID];
  data kakikomi[MAX_ID];
  int i = 0;
  int j;
  int k = 0;
  char str[BUF_SIZE];
  int input;

  printf("読込ファイル名を入力してください: ");
  scanf("%20s", filename);

  if ((dfp = fopen(filename, "r")) == NULL)
    printf("ファイル%sをオープンできません.\n", filename);
  else {
    while (fscanf(dfp, "%s %c%lf%lf", kakikomi[i].name, &kakikomi[i].gen, &kakikomi[i].eng, &kakikomi[i].math) == 4) {
      kakikomi[i].idnum = i;
      i++;
    }
    fclose(dfp);
    for (j = 0; j < i; j++)
      yomikomi[j].idnum = kakikomi[j].idnum;

    bfp = fopen("Seiseki.bin", "wb");
    fwrite(kakikomi, sizeof(data), MAX_ID, bfp);
    fclose(bfp);

    bfp = fopen("Seiseki.bin", "rb");
    fread(yomikomi, sizeof(data), MAX_ID, bfp);
    fclose(bfp);

    printf("どのデータを参照しますか? ID[0~19]: ");
    scanf("%s", str);

    if (str[0] == '-')
      k++;

    while (str[k]) {
      if (isdigit(str[k]) == 0) {
	printf("整数で入力してください.\n");
	return FALSE;
      }
      k++;
    }

    sscanf(str, "%d", &input);

    if (input >= 0 && input <= 19)
      printf("%-14s %c%5.1f%5.1f\n", yomikomi[input].name, yomikomi[input].gen, yomikomi[input].eng, yomikomi[input].math);
    else
      printf("そのようなIDのデータは存在しません.\n");

  } // ファイルオープン判定のelseの閉じカッコ

  return SUCCESS;
}
