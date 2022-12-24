#include<stdio.h>
#define SUCCESS (  1)
#define FAILED  ( -1)
#define SIZE    (200)
/* fgets(char型配列, 長さ, ストーリームポインタ名) */

main() {

  FILE *fp;
  char filename[21];
  int first_fscanf;  /* Kesson.datの中身の1つめの数字(1のこと), fscanfのとき */
  int second_fscanf; /* Kesson.datの中身の2つめの数字(2のこと), fscanfのとき */
  char buf[SIZE];    /* Kesson.datのデータを格納, fgetsのとき              */
  int first_fgets;   /* Kesson.datの中身の1つめの数字(1のこと), fgetsのとき  */
  int second_fgets;  /* Kesson.datの中身の1つめの数字(1のこと), fgetsのとき  */

  printf("読込ファイルを名を入力してください: ");
  scanf("%20s", filename);

  // fscanfでファイルの中身を印字する
  if ((fp = fopen(filename, "r")) == NULL) {
    printf("ファイル%sをオープンできません.\n", filename);
    return FAILED;
  } else {
    puts("fscanfの場合");
    while (fscanf(fp, "%d%d", &first_fscanf, &second_fscanf) == 2) /* その一行のデータ数(数字の数)が2個なら */
      printf("%d %d\n", first_fscanf, second_fscanf);
    putchar('\n');
    fclose(fp);
  }

  // fgets + sscanf でファイルの中身を印字する
  if ((fp = fopen(filename, "r")) == NULL) {
    printf("ファイルをオープンできません.\n", filename);
    return FAILED;
  } else {
    puts("fgetsの場合");
    while (fgets(buf, SIZE, fp) != NULL) {
      if (sscanf(buf, "%d%d", &first_fgets, &second_fgets) == 2) /* その一行のデータ数(数字の数)が2個なら */
	printf("%d %d\n", first_fgets, second_fgets);
      else /* データ数が2個ではない(データが欠損していた)なら */
	printf("データ欠損\n");
    }
    fclose(fp);
  }

  return SUCCESS;
}
