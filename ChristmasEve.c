// Task: https://atcoder.jp/contests/abc115/tasks/abc115_c
#include <stdio.h>
#include <stdlib.h>

int asc(const void *a, const void *b) {return *(int *)a - *(int *)b;}

int main() {
  int N,K,h[101000],i,diff;
  scanf("%d %d", &N,&K);
  for (i=0;i<N;i++) {
    scanf("%d", &h[i]);
  }
  qsort(h,N,sizeof(int),asc);
  diff = h[K-1]-h[0];
  for (i=K;i<N;i++) {
    if (diff > h[i]-h[i-K+1])
      diff = h[i]-h[i-K+1];
  }
  printf("%d\n", diff);
}
