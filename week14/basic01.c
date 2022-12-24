#include<stdio.h>
#define BIN_WIDTH (25)
#define BIN_NUM (8)

main() {

  FILE *fp;
  char filename[21];
  char name[100];
  char gen;
  int eng;
  int math;
  int i;
  int j;
  int bin[BIN_NUM] = {0}; // 各ビン幅のビンの本数を格納する配列

  printf("読込ファイル名を入力してください: ");
  scanf("%20s", filename);

  if ((fp = fopen(filename, "r")) == NULL)
    printf("ファイル%sをオープンできません.\n", filename);
  else {
    while (fscanf(fp, "%s %c%d%d", name, &gen, &eng, &math) == 4) {
      for (i = 0; i < BIN_NUM; i++)
	if ( eng+math >= BIN_WIDTH*i && eng+math < BIN_WIDTH*(i+1) )
	  bin[i]++;
    }
    for (i = 0; i < BIN_NUM; i++) {
      printf("%3d ~ %3d : %d ", BIN_WIDTH*i, BIN_WIDTH*(i+1), bin[i]);
      for (j = 1; j <= bin[i]; j++)
	putchar('*');
      putchar('\n');
    }
    fclose(fp);
  }



  return 0;
}
