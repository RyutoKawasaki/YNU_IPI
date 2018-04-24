#include <stdio.h>
#include <math.h>

int main(void) {
  // 演習問題 問1
  printf("Hello, YNU!\n");

  // 演習問題 問2
  int x = 100;
  x = pow(x, 3);
  printf("xの3乗 = %d\n", x);

  // 応用問題1
  int i, iFirst, iLast;
  iFirst = 1;
  iLast = 20;
  int sum = 0;
  for(i = iFirst; i <= iLast; i++) {
    sum = sum + i;
    printf("%d から %2d までの合計 = %3d\n", iFirst, i, sum);
  }

  // 応用問題2
  int i2, iFirst2, iLast2;
  iFirst2 = 1;
  iLast2 = 10;
  int sum2 = 0;
  for(i2 = iFirst2; i2 <= iLast2; i2++) {
    sum2 = sum2 + i2 * 2;
    printf("%d から %2d までの合計 = %3d\n", iFirst2 + 1, i2 * 2, sum2);
  }

  // 応用問題3
  int yoko, tate;

  printf("  |  1  2  3  4  5  6  7  8  9\n");
  printf("-------------------------------\n");

  for(yoko = 1; yoko < 10; yoko++) {
    printf("%d | ", yoko);

    for(tate = 1; tate < 10; tate++){
      printf("%2d ",yoko * tate);
    }
    printf("\n");
  }

  return 0;
}
