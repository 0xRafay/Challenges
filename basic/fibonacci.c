#include <stdio.h>
int main() {
  int num;
  printf("Sequence up till: ");
  scanf("%d", &num);

  int a = 0, b = 1;
  int next = 0;

  printf("Sequence: ");
  for (int i = 0; i < num; i++) {
    printf("%d, ", a);
    next = a + b;
    a = b;
    b = next;
    next++;
  }
  printf("\n");
  return 0;
}
