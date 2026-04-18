#include <stdio.h>
int main() {
    int arr[] = {3, 5, 1, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    
    printf("Min: %d, Max: %d\n", min, max);
    return 0;
}