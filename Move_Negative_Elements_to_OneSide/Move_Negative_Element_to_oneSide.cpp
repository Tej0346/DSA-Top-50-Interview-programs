#include <bits/stdc++.h>
using namespace std;

void moveNegatives(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        if (arr[left] < 0) {
            left++;
        } else if (arr[right] >= 0) {
            right--;
        } else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, -5, 6};
    moveNegatives(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}