 // Task: https://atcoder.jp/contests/abc118/tasks/abc118_c
#include <stdio.h>

int gcd(int x, int y) {
  return y ? gcd(y, x%y) : x;
}

int main() {
  int N,A,gcd_;
  scanf("%d", &N);
  while(--N) {
    scanf("%d", &A);
    gcd_ = gcd(gcd_, A);
  }
  printf("%d\n", gcd_);
}
