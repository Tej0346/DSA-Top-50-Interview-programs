#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string str = "programming";
    std::unordered_map<char, int> count;

    for (char c : str) {
        count[c]++;
    }

    std::cout << "Duplicate characters: ";
    for (auto const& [key, val] : count) {
        if (val > 1) {
            std::cout << key << " ";
        }
    }
    return 0;
}