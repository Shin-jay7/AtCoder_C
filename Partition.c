// Task: https://atcoder.jp/contests/abc112/tasks/abc112_d
#include <stdio.h>

int main() {
  int N,M;
  for (scanf("%d%d",&N,&M),N=M/N;M%N;N--);
  printf("%d\n",N);
}
