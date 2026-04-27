#include <stdio.h>

void moveNegatives(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (arr[left] < 0 && left < right) left++;
        while (arr[right] >= 0 && left < right) right--;
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {-1, 2, -3, 4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveNegatives(arr, n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}