// Task: https://atcoder.jp/contests/abc116/tasks/abc116_b
#include <stdio.h>

int main() {
  int s,i;
  scanf("%d", &s);
  for (i=4; (s!=1)&&(s!=2)&&(s!=4); i++) {
    if (s%2==0) s = s/2;
    else s = s*3+1;
  }
  printf("%d\n", i);
}
