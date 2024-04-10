#include <stdio.h>

int main() {
  int a, sum = 0, count = 0;
  int first = 0, second = 0;
  float mean;

  printf(" enter interger.");

  while (1) {
    scanf("%d", &a);

    if (a < 0) {
      break;
    }
    if (count == 0 && a < 0) {
      return 0;
    }
    sum = sum + a;

    if (a > first) {
      second = first;
      first = a;
    }
    if (second < a && a < first)
      second = a;
    count++;
  }
  mean = sum / count;
  printf("출력: %d %d %0.2f", first, second, mean);
}
