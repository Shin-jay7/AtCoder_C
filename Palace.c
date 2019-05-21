// Task: https://atcoder.jp/contests/abc113/tasks/abc113_b
#include <stdio.h>
#include <math.h>

int main() {
  int N,T,A,H,diff,min_=1000,ans;
  scanf("%d%d%d",&N,&T,&A);
  for (int i=1;i<=N;i++) {
    scanf("%d",&H);
    diff = fabs(A-(T-H*0.006));
    if (diff<min_){min_=diff; ans=i;}
  }
  printf("%d\n", ans);
}
