#include<stdio.h>

int main(void) {

  FILE *fp;
  char filename[21];
  char name[100];
  char gen;
  double eng, math;
  int num = 0;
  double esum = 0.0;
  double msum = 0.0;

  printf("読込ファイルを入力してください: ");
  fscanf(stdin, "%20s", filename);

  if ((fp = fopen(filename, "r")) == NULL) {
    fprintf(stderr, "ファイル%sをオープンできません.\n", filename);
  } else {
    while (fscanf(fp, "%s %c%lf%lf", name, &gen, &eng, &math) == 4) {
      fprintf(stdout, "%2d %-14s %c  %5.1f\n", num, name, gen, eng+math);
    
      num++;
      esum += eng;
      msum += math;
    }
    printf("平均: %5.1f %5.1f\n", esum/num, msum/num);

    fclose(fp);
  }

  return 0;
}
