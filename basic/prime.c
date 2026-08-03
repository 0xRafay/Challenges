#include <stdio.h>
int main() {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is a prime number\n", num);
    }

    _Bool isPrime = 1;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is a divisor\n", i);
            isPrime = 0;
        }
    }
    if (isPrime && num > 1) {
        printf("%d is a prime number\n", num);
        return 0;
    }
    return 0;
}
