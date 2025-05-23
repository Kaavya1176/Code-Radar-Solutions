#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);
    k = k % n;  // Handle cases where k > n

    // Rotate the array
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1]; // Store last element
        for (int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1]; // Shift elements right
        arr[0] = last; // Move last element to first position
    }

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    return 0;
}