#include <stdio.h>


int main() {
  int i;
  int a;
  int first = 0, second = 0;
  printf("Enter 5 intergers.");

  for (i = 0; i < 5; i++) {
    scanf("%d", &a);
    if (a == 0)
      return 0;
    if (a > first) {
      second = first;
      first = a;
    }
    if (second < a && a < first)
      second = a;
    printf("%d second: %d\n", first, second);
  }

  printf("%d\n", first);
  printf("%d", second);
  return 0;
}
