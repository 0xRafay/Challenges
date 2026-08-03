#include <stdio.h>
int main() {
    int arr[5] = {1, 6, 20, 4, 5};

    int len = 0;
    while (arr[len] != '\0') {
        len++;
    }
    printf("len: %d\n\n", len);

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    printf("Max: %d\n", maximum);
    printf("Min: %d\n", minimum);

    return 0;
}
