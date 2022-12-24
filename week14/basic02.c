#include<stdio.h>

main() {

  FILE *sfp; /* Seiseki.datをリードするファイルポインタ */
  FILE *mfp; /* male.datをライトするファイルポインタ */
  FILE *ffp; /* female.datをライトするファイルポインタ */
  char filename[21];
  char name[100];
  char gen;
  double eng;
  double math;

  printf("読込ファイル名を入力してください: ");
  scanf("%20s", filename);

  if ((sfp = fopen(filename, "r")) == NULL) {
    printf("ファイル%sをオープンできません.\n", filename);
  } else {
    mfp = fopen("Male.dat", "w");
    ffp = fopen("Female.dat", "w");
    while (fscanf(sfp, "%s %c%lf%lf", name, &gen, &eng, &math) == 4) {
      if (gen == 'm')
	fprintf(mfp, "%-15s%c %5.1f%5.1f\n", name, gen, eng, math);
      if (gen == 'f')
	fprintf(ffp, "%-15s%c %5.1f%5.1f\n", name, gen, eng, math);
    }
    printf("Male.datにデータをコピーしました.\n");
    printf("Female.datにデータをコピーしました.\n");
    fclose(sfp);
    fclose(mfp);
    fclose(ffp);
  }

  return 0;
}
