#include<stdio.h>
#include<string.h>
#include<time.h>

#define BUFFER_SIZE (256)
#define MAX (5)
#define HINTNUM (6)

struct Profile {
  int number;
  char name[BUFFER_SIZE];
  int age;
  float height;
  float weight;
  char birthplace[BUFFER_SIZE];
  char specialskill[BUFFER_SIZE];
  char like_class[BUFFER_SIZE];
};

int main(void) {

  struct Profile profile[MAX];
  time_t current;
  int count = 0;
  int i;
  int response = 0;
  int ans;

  time(&current);
  ans = current % 5;

  profile[0].number = count;
  strcpy(profile[0].name, "立命 太郎");
  profile[0].age = 20;
  profile[0].height = 175.0;
  profile[0].weight = 70.0;
  strcpy(profile[0].birthplace, "滋賀");
  strcpy(profile[0].specialskill, "英会話");
  strcpy(profile[0].like_class, "プログラミング演習");
  count++;

  profile[1].number = count;
  strcpy(profile[1].name, "草津 二郎");
  profile[1].age = 22;
  profile[1].height = 160.0;
  profile[1].weight = 65.0;
  strcpy(profile[1].birthplace, "京都");
  strcpy(profile[1].specialskill, "プログラミング");
  strcpy(profile[1].like_class, "日本国憲法");
  count++;

  profile[2].number = count;
  strcpy(profile[2].name, "衣笠 花子");
  profile[2].age = 21;
  profile[2].height = 155.0;
  profile[2].weight = 52.0;
  strcpy(profile[2].birthplace, "大阪");
  strcpy(profile[2].specialskill, "スポーツ全般");
  strcpy(profile[2].like_class, "科学と技術の歴史");
  count++;

  profile[3].number = count;
  strcpy(profile[3].name, "茨木 華子");
  profile[3].age = 20;
  profile[3].height = 160.0;
  profile[3].weight = 55.0;
  strcpy(profile[3].birthplace, "京都");
  strcpy(profile[3].specialskill, "プログラミング");
  strcpy(profile[3].like_class, "数学演習");
  count++;


  profile[4].number = count;
  strcpy(profile[4].name, "滋賀 三郎");
  profile[4].age = 22;
  profile[4].height = 175.0;
  profile[4].weight = 70.0;
  strcpy(profile[4].birthplace, "大阪");
  strcpy(profile[4].specialskill, "英語");
  strcpy(profile[4].like_class, "英語");
  count++;

  printf("以下の情報をものに、誰について説明しているのかを当ててください。\n");

  for (i = 0; i < count; i++) {
    printf("番号: %d\n", profile[i].number);
    printf("名前: %s\n", profile[i].name);
    printf("年齢: %d\n", profile[i].age);
    printf("身長: %5.1f\n", profile[i].height);
    printf("体重: %4.1f\n", profile[i].weight);
    printf("出身地: %s\n", profile[i].birthplace);
    printf("特技: %s\n", profile[i].specialskill);
    printf("好きな授業: %s\n", profile[i].like_class);
    printf("\n");
  }

  for (i = 0; i < HINTNUM; i++) {
    switch(i) {
    case 0 : printf("私の特技は%sです. \n", profile[ans].specialskill); break;
    case 1 : printf("私の出身地は%sです. \n", profile[ans].birthplace); break;
    case 2 : printf("私の年齢は%dです. \n", profile[ans].age); break;
    case 3 : printf("私の身長は%5.1fです. \n", profile[ans].height); break;
    case 4 : printf("私の体重は%4.1fです. \n", profile[ans].weight); break;
    case 5 : printf("私の好きな授業は%sです. \n", profile[ans].like_class); break;
    }

    printf("解答->");
    scanf("%d", &response);
    if (response == ans) {
      printf("正解!\n");
      break;
    } else {
      printf("不正解!\n");
    }
  }
  return 0;
}
