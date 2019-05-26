// Task: https://atcoder.jp/contests/abc112/tasks/abc112_c
#include <stdio.h>
#include <stdlib.h>

struct point {
  int x,y,h;
} p[110];

int main() {
  int N,i,j,k,pp,H,flag,h;
  scanf("%d",&N);
  for (i=1;i<=N;i++)
    scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].h);
  pp = 1;
  while (!p[pp].h) pp++;

  for (i=0;i<=100;i++) {
    for (j=0;j<=100;j++) {
      flag = 0;
      H = p[pp].h + abs(p[pp].x-i) + abs(p[pp].y-j);
      if (!H) H=0;
      for (k=1;k<=N;k++) {
        h = H - abs(p[k].x-i) - abs(p[k].y-j);
        if (h<0) h=0;
        if (h != p[k].h) {
          flag = 1;
          break;
        }
      }
      if (flag==0) printf("%d %d %d\n",i,j,H);
    }
  }
}
