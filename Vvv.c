// Task: https://atcoder.jp/contests/abc111/tasks/arc103_a
#include <stdio.h>

int a[100001],b[100001];
int ans;

int max(int x,int y) {
  if (x>y) return x;
  return y;
}

int main() {
  int n;
  scanf("%d",&n);
  for (int i=0;i<n;i++) {
    int v;
    scanf("%d",&v);
    if (i%2==0) a[v]++;
    else b[v]++;
  }

  int a1=0,a2=0,b1=0,b2=0;
  for (int i=1;i<=100000;i++) {
    if (a[a1]<a[i]) {
      a2=a1;
      a1=i;
    }
    else if (a[a2]<a[i]) a2=i;
    if (b[b1]<b[i]) {
      b2=b1;
      b1=i;
    }
    else if (b[b2]<b[i]) b2=i;
  }
  if (a1==b1) ans=n-max(a[a1]+b[b2], a[a2]+b[b1]);
  else ans=n-(a[a1]+b[b1]);

  printf("%d\n",ans);
}
