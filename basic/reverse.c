#include <stdio.h>
int main() {
  char s[100] = "Hello";

  // not trying to use the lib,
  // so have to count manually
  int len = 0;
  while (s[len] != '\0') {
    len++; // 5 - "Hello"
  }

  int temp_num = 0;
  char temp_char;

  for (int i = len - 1; i > len / 2; i--) {
    temp_char = s[i];
    s[i] = s[temp_num];
    s[temp_num] = temp_char;
    temp_num++;
  }

  printf("Reverse: %s", s);
}
