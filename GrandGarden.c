// Task: https://atcoder.jp/contests/abc116/tasks/abc116_c
#include <stdio.h>

int max(int x, int y) { return x>y ? x : y; }

int main() {
  int N,n,i;
  int ans=0,prev=0;
  scanf("%d", &N);
  for (i=0; i < N; i++) {
    scanf("%d", &n);
    ans += max(n-prev,0);
    prev = n;
  }
  printf("%d\n", ans);
}
