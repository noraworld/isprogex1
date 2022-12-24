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
    /*
～プログラムを書き終わったあとのおはなし～
文字と数字を判定できて万々歳だったが、
マイナス記号が文字として認識されてしまうため、
条件分岐が一致しなかった。
マイナス記号もsscanfでint型変数に変換してくれると思われるが、
今度は、たとえば「-moji」とか入力されたらどうしようもないので、
しかたがないのでマイナス記号だけを別個に考えた。

先頭にマイナス記号が来たときだけkを値を1つ増やし、
マイナス記号が文字であることを判定せずに回避した。
    */

    while (str[k]) {
      if (isdigit(str[k]) == 0) {
	printf("整数で入力してください.\n");
	return FALSE;
      }
      k++;
    }
    /*
【関数の説明】
isdigit()は文字か数字かを判定する関数。
数字なら適当な数値（処理系により異なる）が返却され、
文字なら、数字としての0が返却される。
たとえば、char型配列strが定義されていて、
str[1]にaが入っていれば、0が返却され、
str[1]に1が入っていれば、適当な数値が返却される。

【アルゴリズムの説明】
whileループはナル文字が来るまで判定。
変数kを1つずつ増やしていき、str[0]から順に判定する。
if文の中はisdigitで文字かどうかを判定し、
文字だったら（返却値が0だったら）、「整数で入力してください.」と表示し
プログラムを終了する。
ナル文字まで到達しても文字が存在しなかったら（最後まで0が返却されなかったら）、
プログラムはこの文より以下を通り、str配列の数字をint型変数inputにスキャンされる。
     */


    sscanf(str, "%d", &input);
    /*
【sscanfの説明】
char型配列strをint型配列inputに%dでスキャンする。
str[0]に3, str[1]に「.」, str[2]に1, str[3]に4が入っていたとする。
sscanf(str, "%lf", &pi);とすると, double型変数piに3.14という「数字」が代入される。

【ちなみに】
strに文字が入っていて、それをsscanfで%dとしてinputに代入しようとすると
0が代入される（文字を%dでスキャンすると0になる）。
この0は数字としての0なので、本当の意味での0と区別することができない。
なので、isdigit関数で文字かどうかを判別する必要がある。
    */


    if (input >= 0 && input <= 19)
      printf("%-14s %c%5.1f%5.1f\n", yomikomi[input].name, yomikomi[input].gen, yomikomi[input].eng, yomikomi[input].math);
    else
      printf("そのようなIDのデータは存在しません.\n");

  } // ファイルオープン判定のelseの閉じカッコ

  return SUCCESS;
}
