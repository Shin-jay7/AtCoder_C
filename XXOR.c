// Task: https://atcoder.jp/contests/abc117/tasks/abc117_d
#include <stdio.h>
#include <math.h>

int main() {
  int N,i,j;
  // Note 10**12 is smaller than 2**40
  int sum[40];
  for (i=0; i<40; i++) sum[i]=0;
  long K,A[100000],A_[100000],ans=0;
  long long func=0;

  scanf("%d %ld", &N,&K);
  for (i=0; i<N; i++) {
    scanf("%ld", &A[i]);
    A_[i] = A[i];
  }

  // Add up each binary digits???
  for(i=0; i<N; i++) {
    for(j=0; j<40; j++) {
      sum[j] += A_[i]%2;
      A_[i] = A_[i] >> 1;
    }
  }

  for (i=39; i>-1; i--) {
    // What's going on???????????
    if (sum[i]*2 < N) {
      if (pow(2.0,i)+ans <= K) {
        ans += (long)pow(2.0,i);
      }
    }
  }

  for (i=0; i<N; i++) {
    func += ans^A[i];
  }
  printf("%lld\n", func);
}

