#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE (256)

struct Profile {
  char name[BUFFER_SIZE];
  int age;
  float height;
  float weight;
  char specialskill[BUFFER_SIZE];
};


int main(void) {

  struct Profile profile;

  strcpy(profile.name, "立命 太郎");
  profile.age = 20;
  profile.height = 175.0;
  profile.weight = 70.0;
  strcpy(profile.specialskill, "英会話");

  printf("名前: %s\n", profile.name);
  printf("年齢: %d\n", profile.age);
  printf("身長: %5.1f\n", profile.height);
  printf("体重: %4.1f\n", profile.weight);
  printf("特技: %s\n", profile.specialskill);

  return 0;
}
