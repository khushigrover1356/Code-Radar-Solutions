#include <stdio.h>

// Function to reverse a section of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    k = k % n; // Ensure k is within the bounds of the array length
    if (k == 0) return; // No need to rotate if k is 0
    
    // Step 1: Reverse the whole array
    reverse(arr, 0, n - 1);
    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Step 3: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Number of positions to rotate
    
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    rotateArray(arr, n, k);
    
    printf("\nRotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
