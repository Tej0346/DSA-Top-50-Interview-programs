#include <iostream>
#include <algorithm>
using namespace std;
void reverseArray(int arr[], int n) {
    reverse(arr, arr + n);  // two-pointer manually
}
int main() {
    int arr[] = {1,2,3,4,5};
    reverseArray(arr, 5);
    for(int x: arr) cout << x << " ";
}