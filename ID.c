// Task: https://atcoder.jp/contests/abc113/tasks/abc113_c
#include <stdio.h>
#include <stdlib.h>

typedef struct dat {
  int num,P,Y;
} Data;

int cmp(const void *a, const void *b) {
  return ((Data *)a)->Y - ((Data *)b)->Y;
}

int main() {
  int N,M,i;
  scanf("%d%d",&N,&M);
  Data city[M];
  int pref[M],id[M],p_to_c[1000001];
  for (i=0;i<M;i++) {
    scanf("%d%d",&city[i].P,&city[i].Y);
    city[i].num = i;
    pref[i] = city[i].P;
  }
  qsort(city,M,sizeof(Data),cmp);
  for (i=0;i<M;i++) id[city[i].num] = ++p_to_c[city[i].P];
  for (i=0;i<M;i++) printf("%06d%06d\n",pref[i],id[i]);
}
