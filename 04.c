#include <stdio.h>
#include <stdbool.h>

int main(void) {
  // 演習問題
  // 問1 回答：整数a,bの大小・等価を比較してその結果を出力するプログラム
  int a = 5, b = 8;

	if ( a == b ) {
		printf("a = b です\n");
	} else if ( a < b ) {
		printf("a < b です\n");
	} else {
		printf("a > bです\n");
	}

  // 問2 回答：実数a,b,c,d,eの平均を計算して出力するプログラム
  float a = 3.0, b = 5.0, c = 10.0, d = 2.0, e = 7.0;
	printf("%f\n",(a + b + c + d + e) / 5.0);

  // 問3
  float a, b, c, area;
  a = 10.0;
  b = 5.0;
  c = 8.0;
  area = (a + b) * c / 2.0;

  printf("上底 = %f, 下底 = %f, 高さ = %f の台形の面積 = %f\n", a, b, c, area);

  // 問4
  float r, area;
  #define PI 3.14;

  r = 5;
  area = r * r * PI;
  printf("半径r = %fの円の面積 = %f\n", r, area);

  // 問5
  int a, b;
  a = 100;
  b = 10;
  bool aIsMultipleOfb = (a % b == 0);

  if (aIsMultipleOfb) {
    printf("割り切れます\n");
  } else {
    printf("割り切れません\n");
  }

  // 問6
  int n, i;

  for(i = 1; i <= 100; i++) {
    if(i % 7 == 0) {
      printf("%d\n", i);
    }
  }

  // 応用問題1
  int a, i;
  do {
    printf("2より大きい整数を入力してください。\n");
    scanf("%d", &a);
  } while(a <= 2 || a == 0);

  for(i = 2; i <= a-1; i++) {
    if(a % i == 0) {
      printf("%dは素数ではありません\n", a);
      break;
    } else {
      printf("%dは素数です\n", a);
      break;
    }
  }

  // 応用問題2
  int n;

  printf("西暦年数nを入力してください\n");
  scanf("%d", &n);

  bool nIsMultipleOf400 = (n % 400 == 0 && n != 0);
  bool nIsMultipleOf4Not100 = (n % 4 == 0 && n % 100 != 0 && n != 0);

  if (nIsMultipleOf400 || nIsMultipleOf4Not100) {
    printf("%d年はうるう年\n", n);
  } else {
    printf("%d年はうるう年でない\n", n);
  }

  return 0;
}
