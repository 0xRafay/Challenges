#include <stdbool.h>
#include <stdio.h>

int main() {
  char ch[100] = "mum";
  int len = 0;
  while (ch[len] != '\0') {
    len++; // 7
  }
  int start = 0;
  int end = len - 1;
  
  _Bool isPalindrome = 1;

  while (start < end) {
    if (ch[start] != ch[end]) {
      isPalindrome = 0;
    }
    start++;
    end--;
  }
  if (isPalindrome) {
    printf("%s is a Palindrome!", ch);
  } else {
    printf("%s is not a Palindrome!", ch);
  }
}
