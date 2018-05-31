#include <stdio.h>

int main(void) {
  // 練習問題1
  int n, divisor;
  printf("約数を求めたい整数を入力してください。\n");
  scanf("%d", &n);

  printf("%dの約数は\n", n);
  divisor = 0;
  while(divisor < n) {
    divisor = divisor + 1;
    if(n % divisor == 0) {
      printf("%d\n", divisor);
    }
  }

  // 練習問題2
  int n, count;
  n = 100;

  count = 0;
  do {
    count = count + 1;
    if (count % 3 == 0) {
      printf("%d\n", count);
    }
  } while(count <= n);

  // 練習問題3
  // while文
  int n, sum, count;
  n = 100;

  count = 0;
  sum = 0;
  while (count < n) {
    count = count + 1;
    sum = sum + count;
  }
  printf("合計 = %d\n", sum);

  // for文
  int n, sum, count;
  n = 100;

  sum = 0;
  for(count = 1; count <= n; count++) {
    sum = sum + count;
  }
  printf("合計 = %d\n", sum);

  // do while文
  int n, sum, count;
  n = 100;

  sum = 0;
  count = 0;
  do {
    count = count + 1;
    sum = sum + count;
  } while(count < n);

  printf("合計 = %d\n", sum);

  return 0;
}
