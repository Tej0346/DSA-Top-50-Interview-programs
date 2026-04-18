#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 3, 5};
    std::vector<int> v2 = {2, 4, 6};
    std::vector<int> result(v1.size() + v2.size());
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());

    for (int n : result) std::cout << n << " ";
    return 0;
}