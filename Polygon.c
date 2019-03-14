// Task: https://atcoder.jp/contests/abc117/tasks/abc117_b
#include <stdio.h>

int main() {
  int N,L;
  int i,max,sum=0;
  scanf("%d", &N);
  for (i=0; i<N; i++) {
    scanf("%d", &L);
    sum += L;
    if (L>max) max=L;
  }
  puts(max*2<sum ? "Yes" : "No");
}
