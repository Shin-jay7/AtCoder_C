// Task: https://atcoder.jp/contests/abc118/tasks/abc118_a?lang=en
#include <stdio.h>

int main() {
  int A,B;
  scanf("%d%d", &A,&B);
  printf("%d\n", B%A ? B-A : A+B);
}
