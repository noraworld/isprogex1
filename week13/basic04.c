#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE (256) // 最大文字入力数
#define MAX (5) // 学生の人数

// 構造体の定義
struct Profile {
  int number;
  char name[BUFFER_SIZE];
  int age;
  float height;
  float weight;
  char birthplace[BUFFER_SIZE];
  char specialskill[BUFFER_SIZE];
};

// プロトタイプ宣言
void sort(struct Profile *profile, int student_number);
void swap(struct Profile *x, struct Profile *y);


int main(void) {

  struct Profile profile[MAX];
  int count = 0;
  int i;

  profile[0].number = count;
  strcpy(profile[0].name, "立命 太郎");
  profile[0].age = 20;
  profile[0].height = 175.0;
  profile[0].weight = 70.0;
  strcpy(profile[0].birthplace, "滋賀");
  strcpy(profile[0].specialskill, "英会話");
  count++;

  profile[1].number = count;
  strcpy(profile[1].name, "草津 二郎");
  profile[1].age = 22;
  profile[1].height = 180.0;
  profile[1].weight = 65.0;
  strcpy(profile[1].birthplace, "京都");
  strcpy(profile[1].specialskill, "プログラミング");
  count++;

  profile[2].number = count;
  strcpy(profile[2].name, "衣笠 花子");
  profile[2].age = 21;
  profile[2].height = 160.0;
  profile[2].weight = 52.0;
  strcpy(profile[2].birthplace, "大阪");
  strcpy(profile[2].specialskill, "スポーツ全般");
  count++;

  profile[3].number = count;
  strcpy(profile[3].name, "茨木 華子");
  profile[3].age = 20;
  profile[3].height = 162.0;
  profile[3].weight = 55.0;
  strcpy(profile[3].birthplace, "京都");
  strcpy(profile[3].specialskill, "プログラミング");
  count++;


  profile[4].number = count;
  strcpy(profile[4].name, "滋賀 三郎");
  profile[4].age = 22;
  profile[4].height = 168.0;
  profile[4].weight = 70.0;
  strcpy(profile[4].birthplace, "大阪");
  strcpy(profile[4].specialskill, "英語");
  count++;

  sort(profile, MAX);

  for (i = 0; i < count; i++) {
    printf("番号: %d\n", profile[i].number);
    printf("名前: %s\n", profile[i].name);
    printf("年齢: %d\n", profile[i].age);
    printf("身長: %5.1f\n", profile[i].height);
    printf("体重: %4.1f\n", profile[i].weight);
    printf("出身地: %s\n", profile[i].birthplace);
    printf("特技: %s\n", profile[i].specialskill);
    printf("\n");
  }

  return 0;
}

// 昇順にソート
void sort(struct Profile *profile, int student_number) {

  int k = student_number - 1;
  while (k >= 0) {
    int i, j;
    for (i = 1, j = -1; i <= k; i++)
      if (profile[i-1].height < profile[i].height) {
	j = i - 1;
	swap(&profile[i], &profile[j]);
      }
    k = j;
  }
}

// 2人の学生のメンバ情報を入れ替え
void swap(struct Profile *x, struct Profile *y) {

  struct Profile temp = *x;
  *x = *y;
  *y = temp;

}
