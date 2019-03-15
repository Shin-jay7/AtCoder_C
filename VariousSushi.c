// Task: https://atcoder.jp/contests/abc116/tasks/abc116_d
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define MAX 200000

struct t_d {
  int t, d;
};

int cmp(const void* a, const void* b) {
  const struct t_d* x = (const struct t_d*)a, *y = (const struct t_d*)b;
  if (x->d > y->d) return -1;
  if (x->d < y->d) return 1;
  if (x->t < y->t) return -1;
  return x->t > y->t;
}

int N,K;
struct t_d sushi[MAX];

void read_data() {
  int i;
  if (scanf("%d %d", &N,&K) != 2) exit(1);
  for (i=0; i<N; i++) {
    if (scanf("%d %d", &sushi[i].t, &sushi[i].d) != 2) exit(1);
  }
}

int main() {
  int i;
  int64_t d_point = 0;
  char dup_sushi[MAX] = {0};
  struct t_d dup_sushi_t_d[MAX];
  int count = 0;
  int64_t t_variety = 0;
  int64_t score = 0;
  int64_t alt_score = 0;

  read_data();
  qsort(sushi, N, sizeof(*sushi), cmp);

  for (i=0; i<K; i++) {
    d_point += sushi[i].d;
    if (dup_sushi[sushi[i].t]) {
      dup_sushi_t_d[count++] = sushi[i];
    } else {
      t_variety++;
    }
    dup_sushi[sushi[i].t] = 1;
  }
  score = d_point + t_variety*t_variety;

  for (i=K; i<N; i++) {
    if (count>0 && !dup_sushi[sushi[i].t]) {
      d_point -= dup_sushi_t_d[--count].d;
      d_point += sushi[i].d;
      t_variety++;
      dup_sushi[sushi[i].t] = 1;
      alt_score = d_point + t_variety*t_variety;
      if (alt_score>score) score = alt_score;
    }
  }
  printf("%" PRId64"\n", score);
}

