// Task: https://atcoder.jp/contests/abc117/tasks/abc117_c
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
  return *((int *)a) - *((int *)b);
}

int main() {
  int N,M;
  int X[100000], dst[100000];
  int i,sum=0;
  scanf("%d %d", &N,&M);

  for (i=0; i < M; i++) scanf("%d", &X[i]);
  qsort(X,M,sizeof(int),cmp);

  for (i=0; i<M-1; i++) dst[i] = X[i+1]-X[i];
  qsort(dst,M,sizeof(int),cmp);

  for (i=N-1; i<M-1; i++) sum += dst[i];
  printf("%d\n", sum);
}
