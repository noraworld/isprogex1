#include<stdio.h>

int main(void) {

  FILE *fp;
  double pi = 3.14159265358979323846;

  if ((fp = fopen("PI.bin", "wb")) == NULL)
    printf("ファイルをオープンできません.\n");
  else {
    fwrite(&pi, sizeof(double), 1, fp);
    fclose(fp);
  }


  if ((fp = fopen("PI.bin", "rb")) == NULL)
    printf("ファイルをオープンできません.\n");
  else {
    fread(&pi, sizeof(double), 1, fp);
    printf("円周率は%23.21fです.\n", pi);
    fclose(fp);
  }

  return 0;
}
