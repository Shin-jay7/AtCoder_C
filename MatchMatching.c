 // Task: https://atcoder.jp/contests/abc118/tasks/abc118_d
#include <stdio.h>

int max(int x, int y) { return x>y ? x : y; }

int main(void) {
  int N,M,match_list[10]={0,2,5,5,4,5,6,3,7,6},len;
  int i,j;
  int ans[5000];
  scanf("%d %d", &N,&M);
  int max_digits[N+1],nums[M],matches[M];

  for (i=0; i<M; i++) scanf("%d", &nums[i]);
  for (i=0; i<M-1;i++) {
    for (j=0; j<M-i-1; j++) {
      if (nums[j] < nums[j+1]) {
        int temp = nums[j];
        nums[j] = nums[j+1];
        nums[j+1] = temp;
      }
    }
  }
  for (i=0; i<M; i++) matches[i] = match_list[nums[i]];
  max_digits[0] = 0;
  for (i=1; i <= N; i++) {
    max_digits[i] = -2100000000;
    for (j=0; j<M; j++) {
      if (i-matches[j] >= 0) {
        max_digits[i] = max(max_digits[i], max_digits[i-matches[j]]+1);
      }
    }
  }
  len = max_digits[N];
  for (i=0; i<len; i++) {
    for (j=0; j<M; j++) {
      if (N>=matches[j] && max_digits[N-matches[j]] == max_digits[N]-1) {
        ans[i] = nums[j];
        N -= matches[j];
        break;
      }
    }
  }
  for (i=0; i<len; i++) {
    printf("%d", ans[i]);
  }
}
