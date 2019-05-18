// Task: https://atcoder.jp/contests/abc114/tasks/abc114_b
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i,j,ans=1000;
  float n;
  char s[20];
  scanf("%s", s);
  for (i=0;i<8;i++) {
    for (j=n=0;j<3;j++) {
      n=n*10+s[i+j]-48;
    }
    ans=fmin(ans, fabs(753-n));
  }
  printf("%d\n", ans);
}
