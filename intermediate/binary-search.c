#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int num_to_find;
    printf("Num to find: ");
    scanf("%d", &num_to_find);

    int len = 0;
    while (arr[len] != '\0') {
        len++;
    }
    printf("len: %d\n", len);

    int left = 0;
    int right = len - 1;

    int index = 0;
    _Bool found = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == num_to_find) {
            index = mid;
            found = 1;
            break;
        }
        if (arr[mid] < num_to_find) {
            left = mid + 1;
        } else if (arr[mid] > num_to_find) {
            right = mid - 1;
        } else {
            break;
        }
    }
    if (found) {
        printf("%d found at index: %d\n", num_to_find, index);
    } else {
        printf("%d was not found!", num_to_find);
    }
    return 0;
}
