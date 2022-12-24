#include<stdio.h>
#define STRING_MAX (256)

typedef struct {
  char code[STRING_MAX];
  char name[STRING_MAX];
  int price;
} Product;


int main() {

  Product product;

  printf("商品番号を入力してください: ");
  scanf("%s", product.code);

  printf("商品名を入力してください: ");
  scanf("%s", product.name);

  printf("価格を入力してください: ");
  scanf("%d", &product.price);


  printf("\n商品番号: %s\n", product.code);
  printf("商品名: %s\n", product.name);
  printf("価格: %d\n", product.price);

  return 0;

}
