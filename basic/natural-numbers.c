#include <stdio.h>
int main() {
  int input = 10;
  int natural = 0;

  for (int i = 0; i <= 10; i++) {
    natural += i;
  }
  printf("Sum of Natural Numbers: %d\n", natural);
}
