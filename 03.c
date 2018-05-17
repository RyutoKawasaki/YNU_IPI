#include <stdio.h>

int main(void) {
  // 練習問題 1
  int a, b, c, d;
  a = 2;
  b = 3;
  c = a + b;
  d = a * b;

  if (c > d) {
    printf("a + b = %d\n", c);
  } else if (d > c) {
    printf("a * b = %d\n", d);
  } else {
    printf("a + b = a * b\n");
  }

  // 練習問題 2
  int a, b, c;
  a = 1;
  b = 2;
  c = 3;
  if (a + b > c || c > a * 2) {
    printf("条件を満たしています\n");
  } else {
    printf("条件を満たしていません\n");
  }

  // 練習問題 3
  // 問題 1: char, int, float, double

  // 問題 2: 真

  // 問題 3: define N 100

  // 問題 4: int a = 10;

  // 問題 5: a % 2 == 0 && a < 100;

  // 問題 6:   a < 0 || a > 100;

  // 問題 7:   a = b * c;

  // 問題 8
  int n;
  for (n = 0; n < 101; n++) {
    if (n % 6 ==0 && n % 4 != 0) {
      printf("%d\n", n);
    }
  }

  return 0;
}
