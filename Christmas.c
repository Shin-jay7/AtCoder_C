// Task: https://atcoder.jp/contests/abc115/tasks/abc115_c
#include <stdio.h>
#include <math.h>

long eat(long N, long X) {
  long i=N, p=0;
  while (X>0) {
    while((pow(2,i+2)-3)>X && X>0){i--;X--;}
    if (X==(pow(2,i+2)-3)) {
      X-=pow(2,i+2)-3;
      p+=pow(2,i+1)-1;
    } else if (X>0) {
      X-=pow(2,i+2)-3+1;
      p+=pow(2,i+1);
    }
  }
  return p;
}

int main() {
  long N;
  long X,eaten_patty;
  scanf("%ld %ld", &N,&X);
  eaten_patty = eat(N,X);
  printf("%ld\n", eaten_patty);
}
