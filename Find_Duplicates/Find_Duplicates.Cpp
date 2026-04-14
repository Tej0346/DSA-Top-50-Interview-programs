#include <iostream>
#include <vector>
#include <unordered_set>

int main() {
    std::vector<int> arr = {1, 2, 3, 2, 4, 5, 3};
    std::unordered_set<int> seen;
    std::unordered_set<int> duplicates;

    for (int num : arr) {
        if (seen.find(num) != seen.end()) {
            duplicates.insert(num);
        } else {
            seen.insert(num);
        }
    }

    std::cout << "Duplicates: ";
    for (int d : duplicates) std::cout << d << " ";
    return 0;
}