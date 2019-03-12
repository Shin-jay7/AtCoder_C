 // Task: https://atcoder.jp/contests/abc118/tasks/abc118_b
#include <stdio.h>

int main() {
  int N,M,K,love;
  int i,j;
  int foods[31] = {};
  int counter = 0;
  scanf("%d %d\n", &N, &M);

  for (i=0; i<N; i++) {
    scanf("%d", &K);
    for (j=0; j<K; j++) {
      scanf("%d", &love);
      foods[love]++;
    }
  }

  for (i=1; i<=M; i++) {
    if (foods[i] == N) {
      counter++;
    }
  }

  printf("%d\n", counter);
}
