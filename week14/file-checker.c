#include<stdio.h>
#include<ctype.h>
#define MAX (32)
#define DETERMINANT (7)
#define SUCCESS (0)
#define FALSE (-1)

int main(void) {

  FILE *fp;
  char input_fgets[MAX];
  int input;
  int i;
  int j;

  puts("End           : [0]");
  puts("Male.dat      : [1]");
  puts("Female.dat    : [2]");
  puts("datatime.dat  : [3]");
  puts("Seiseki.bin   : [4]");
  puts("PI.bin        : [5]");
  puts("All Conference: [6]");
  puts("Offer         : [7]");

  do {
    printf("どのファイルを参照しますか?: ");
    fgets(input_fgets, sizeof(input_fgets)-1, stdin);

    if (input_fgets[0] == 10) {
      printf("何も入力されませんでした. 終了します.\n");
      return FALSE;
    }

    i = 0;
    while (input_fgets[i] != '\n')
      i++;
    input_fgets[i] = '\0';

    j = 0;
    while (input_fgets[j]) {
      if (isdigit(input_fgets[j]) == 0) {
	printf("その要求は受け付けできません.\n");
	return FALSE;
      }
      j++;
    }

    input = atoi(input_fgets);

    if (input < 0 || input > DETERMINANT) {
      printf("ありえない数字を入力しています.\n");
      return FALSE;
    }

    if (input == 1) {
      fp = fopen("Male.dat", "r");
      if (fp == NULL)
	printf("Male.datは存在しません.\n");
      else
	printf("Male.datは存在します.\n");
    }

    if (input == 2) {
      fp = fopen("Female.dat", "r");
      if (fp == NULL)
	printf("Female.datは存在しません.\n");
      else
	printf("Female.datは存在します.\n");
    }

    if (input == 3) {
      fp = fopen("datatime.dat", "r");
      if (fp == NULL)
	printf("datatime.datは存在しません.\n");
      else
	printf("datatime.datは存在します.\n");
    }

    if (input == 4) {
      fp = fopen("Seiseki.bin", "r");
      if (fp == NULL)
	printf("Seiseki.binは存在しません.\n");
      else
	printf("Seiseki.binは存在します.\n");
    }

    if (input == 5) {
      fp = fopen("PI.bin", "r");
      if (fp == NULL)
	printf("PI.binは存在しません.\n");
      else
	printf("PI.binは存在します.\n");
    }

    if (input == 6) {
      fp = fopen("Male.dat", "r");
      if (fp == NULL)
	printf("Male.dat    は存在しません.\n");
      else
	printf("Male.dat    は存在します.\n");

      fp = fopen("Female.dat", "r");
      if (fp == NULL)
	printf("Female.dat  は存在しません.\n");
      else
	printf("Female.dat  は存在します.\n");

      fp = fopen("datatime.dat", "r");
      if (fp == NULL)
	printf("datatime.datは存在しません.\n");
      else
	printf("datatime.datは存在します.\n");

      fp = fopen("Seiseki.bin", "r");
      if (fp == NULL)
	printf("Seiseki.bin は存在しません.\n");
      else
	printf("Seiseki.bin は存在します.\n");

      fp = fopen("PI.bin", "r");
      if (fp == NULL)
	printf("PI.bin      は存在しません.\n");
      else
	printf("PI.bin      は存在します.\n");
    }

    if (input == 7) {
      puts("End           : [0]");
      puts("Male.dat      : [1]");
      puts("Female.dat    : [2]");
      puts("datatime.dat  : [3]");
      puts("Seiseki.bin   : [4]");
      puts("PI.bin        : [5]");
      puts("All Conference: [6]");
      puts("Offer         : [7]");
    }

  } while (input != 0);

  if (input == 0) // 念のため
    printf("プログラムは正常に終了しました.\n");

  fclose(fp);

  return SUCCESS;
}
