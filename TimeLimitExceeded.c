// Task: https://atcoder.jp/contests/abc112/tasks/abc112_b
#include <stdio.h>

int main() {
  int N,T,i,c,t,_min=1001;
  scanf("%d%d",&N,&T);
  for (i=0;i<N;i++) {
    scanf("%d%d",&c,&t);
    if (t<=T && c<_min)
      _min = c;
  }
  if (_min==1001) puts("TLE");
  else printf("%d\n", _min);
}
