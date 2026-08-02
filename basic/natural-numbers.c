#include <stdio.h>
int main() {
  int input = 10;

  printf("Sum Until: ");
  scanf("%d", &input);

  int natural = 0;

  for (int i = 0; i <= input; i++) {
    natural += i;
  }
  printf("Sum of Natural Numbers: %d\n", natural);
}
