#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define STR_SIZE (256)
#define EXIT (0)

int main() {

  char str[STR_SIZE];
  int i;

  printf("うんとかすんとか言ったらどうなの？: ");
  fgets(str, sizeof(str)-1, stdin);

  if (str[0] == 10) {
    printf("なんも入力しなかったでしょww\n何も言わないなんてさすがにひどいわね。\nそれともなに、何も入力しないとどうなるか実験したわけ？　サイッテーー！！！\n");
    return EXIT;
  }

  i = 0;
  while (str[i] != '\n')
    i++;
  str[i] = '\0';

  i = 0;
  while (str[i]) {
    if (isdigit(str[i]) != 0) {
      printf("数字なんか言わないでちゃんと言葉を言いなさいよ！！\nほんとあんたらって数字が好きよね。\n");
      return EXIT;
    }
    i++;
  }

  while (str[0] == 32) {
    printf("そんなところにスペース打って\n「ぼくはちゃんと入力しましたよ」なんて言ったってムダよ！\nあたしを誰だと思ってるの？このあたしに歯向かおうなんぞ\n10000000000000000000000000000000000000000000000年早いわ！！！\n");
    return EXIT;
  }

  i = 0;
  while (str[i]) {
    str[i] = tolower(str[i]);
    i++;
  }

  if (strcmp(str, "yes") == 0)
    printf("はいはい、返事しかできないのね。わかったわ、さようなら！！\n");
  else if (strcmp(str, "no") == 0)
    printf("なかなか反抗的だわね。気に入ったわ。\n");
  else
    printf("%sだって？あんた、何言ってるの？ww\n", str);

  return 0;
}
