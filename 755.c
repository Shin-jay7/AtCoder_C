// Task: https://atcoder.jp/contests/abc114/tasks/abc114_c
#include <stdio.h>

int N,ans=0;

int dfs(long a,int b,int c,int d) {
  if (a>N) return ans;
  if (b && c && d) ans++;
  dfs(a*10+3,1,c,d);
  dfs(a*10+5,b,1,d);
  dfs(a*10+7,b,c,1);
  return 0;
}

int main() {
  scanf("%d",&N);
  dfs(0,0,0,0);
  printf("%d\n",ans);
}
