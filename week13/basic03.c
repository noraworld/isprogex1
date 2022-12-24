#include<stdio.h>
#define MAX_STRING (256)

// 【私的なメモ】構造体は関数よりも上で宣言する.
struct Profile {
  int number;
  char Jname[MAX_STRING];
  char Ename[MAX_STRING];
  char address[MAX_STRING];
};

// 【私的なメモ】必ず構造体を宣言してからプロトタイプ宣言する!!
void print_data(struct Profile data[]);

int main() {

  struct Profile data[3] = {
    {1, "立命 太郎", "Ritumei Taro", "滋賀県草津市野路東1-1-1"},
    {2, "衣笠 花子", "Kinugasa Hanako", "京都府京都市北区等持院北町56-1"},
    {3, "朱雀 二郎", "Suzaku Jiro", "京都府京都市中京区西ノ京朱雀町1"},
  };

  // 【私的なメモ】引数は, メイン関数で宣言した配列名のみでよい.
  print_data(data);

  return 0;
}

// 【私的なメモ】「struct」と構造体タグ(Profile)を書き忘れないこと!!
void print_data(struct Profile data[]) {

  int i;
  for (i = 0; i < 3; i++) {
    printf("学生番号: %d\n", data[i].number);
    printf("名前: %s\n", data[i].Jname);
    printf("名前（ローマ字）: %s\n", data[i].Ename);
    printf("住所: %s\n\n", data[i].address);
  }

}
