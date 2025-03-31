#include <stdio.h>

int main() {
    int arr[] = {1, 3, 2, 4, 5};  // This is NOT sorted
    int n = sizeof(arr) / sizeof(arr[0]);
    int isSorted = 1; // Assume it's sorted

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    if (isSorted == 1) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}