// Task: https://atcoder.jp/contests/abc114/tasks/abc114_d
#include <stdio.h>

int N;
int e[101];

int num(int m) {
  int i,cnt=0;
  for (i=0;i<=N;i++) {
    if (e[i]>=m-1) cnt++;
  }
  return cnt;
}

int main() {
  int i,j,cur,ans=0;
  scanf("%d",&N);
  for (i=0;i<=101;i++) e[i]=0;
  for (i=2;i<=N;i++) {
    cur=i;
    for (j=2;j<=i;j++) {
      while (cur%j==0) {
        cur /= j;
        e[j]++;
      }
    }
  }

  ans += num(75);
  ans += num(25)*(num(3)-1);
  ans += num(15)*(num(5)-1);
  ans += num(5)*(num(5)-1)*(num(3)-2)/2;

  printf("%d\n",ans);
}
