#include <iostream>
#include <vector>
#include <algorithm>

void rotateArray(std::vector<int>& arr) {
    if (arr.empty()) return;
    // Using STL: rotate(start, middle, end)
    // To rotate right by 1, the "new first" element is the last one
    std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    rotateArray(arr);
    for (int x : arr) std::cout << x << " ";
    return 0;
}