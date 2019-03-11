// Task: https://atcoder.jp/contests/abc118/tasks/abc118_a?lang=en
#include <stdio.h>

int main() {
  int A,B;
  scanf("%d %d", &A, &B);
  if (B%A == 0) {
    printf("%d", A+B);
  } else {
    printf("%d", B-A);
  }
}
