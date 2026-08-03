#include <stdio.h>
void merge(int arr[], int left, int right, int mid) {

    int size_of_left_subarray = mid - left + 1;
    int size_of_right_subarray = right - mid;

    int temp_left[size_of_left_subarray];
    int temp_right[size_of_right_subarray];

    for (int i = 0; i < size_of_left_subarray; i++) {
        temp_left[i] = arr[left + i];
    }
    for (int j = 0; j < size_of_right_subarray; j++) {
        temp_right[j] = arr[mid + 1 + j];
    }
    int i = 0;
    int j = 0;

    int merged_subarray = left;

    while (i < size_of_left_subarray && j < size_of_right_subarray) {

        if (temp_left[i] <= temp_right[j]) {
            arr[merged_subarray] = temp_left[i];
            i++;
        } else {
            arr[merged_subarray] = temp_right[j];
            j++;
        }
        merged_subarray++;
    }
    while (i < size_of_left_subarray) {
        arr[merged_subarray] = temp_left[i];
        i++;
        merged_subarray++;
    }
    while (j < size_of_right_subarray) {
        arr[merged_subarray] = temp_right[j];
        j++;
        merged_subarray++;
    }
}

// couldnt find any better way *shrug*
void mergeSort(int arr[], int left, int right) {

    int mid = left + (right - left) / 2;

    if (left < right) {

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, right, mid);
    }
}

int main() {
    int arr[7] = {38, 27, 69, 20, 30, 43, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = len - 1;

    mergeSort(arr, left, right);

    printf("array: [");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
