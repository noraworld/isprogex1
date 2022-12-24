#include <stdio.h>

#define MAX_SIZE 128

struct Product {
  char code[MAX_SIZE];
  char name[MAX_SIZE];
  int price;
};

int main(void)
{
    struct Product product;
  
    printf("商品番号を入力して下さい\n");
    scanf("%s", product.code);
    printf("商品名を入力して下さい\n");
    scanf("%s", product.name);
    printf("価格を入力して下さい\n");
    scanf("%d", &product.price);
    printf("\n");

    printf("商品番号：%s\n", product.code);
    printf("商品名：%s\n", product.name);
    printf("価格：%d\n", product.price);

    return 0;
}
