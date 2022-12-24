#include<stdio.h>
#define MAX 256

void arrayMinus(int *a, int *b,int size);

int main(void)
{
  int size;
  int a[MAX];
  int b[MAX];
  int x;

  printf("ベクトルの次元の数を入力してください\n");
  scanf("%d", &size);

  for(x=0;x<size;x++) {
    printf("１つめのベクトルの第%d要素を入力してください",x+1);
    scanf("%d", a+x);
  }
	
  for(x=0;x<size;x++) {
    printf("２つめのベクトルの第%d要素を入力してください",x+1);
    scanf("%d", b+x);
  }
  
  arrayMinus(a, b, size);
  
  printf("２つのベクトルの差は\n(");
  for(x=0;x<size-1;x++)
    {
    printf("%d,",*(a+x));
    }
  printf("%d)\n",*(a+size-1));

  return 0;
}

void arrayMinus(int *a, int *b,int size)
{
  int i;

  for(i=0;i<size;i++) {
    *(a+i)-=*(b+i);
  }
}
