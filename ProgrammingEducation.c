// Task: https://atcoder.jp/contests/abc112/tasks/abc112_a
#include <stdio.h>

int main() {
  int a,b,c;
  scanf("%d",&a);
  if (a==1) puts("Hello World");
  else {
    scanf("%d%d",&b,&c);
    printf("%d\n",b+c);
  }
}
