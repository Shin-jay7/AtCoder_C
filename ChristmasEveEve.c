// Task: https://atcoder.jp/contests/abc115/tasks/abc115_b
#include<stdio.h>
int main() {
  int n,p,max,ans=0;
  for (scanf("%d", &n);n>0;n--) {
    scanf("%d", &p);
    max = (max>p)?max:p;
    ans += p;
  }
  printf("%d\n", ans-max/2);
}
