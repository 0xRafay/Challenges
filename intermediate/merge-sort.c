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
    int index_l = 0;
    int index_r = 0;

    int merged_subarray = left;

    while (index_l < size_of_left_subarray &&
           index_r < size_of_right_subarray) {

        if (temp_left[index_l] <= temp_right[index_r]) {
            arr[merged_subarray] = temp_left[index_l];
            index_l++;
        } else {
            arr[merged_subarray] = temp_right[index_r];
            index_r++;
        }
        merged_subarray++;
    }
    while (index_l < size_of_left_subarray) {
        arr[merged_subarray] = temp_left[index_l];
        index_l++;
        merged_subarray++;
    }
    while (index_r < size_of_right_subarray) {
        arr[merged_subarray] = temp_right[index_r];
        index_r++;
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
