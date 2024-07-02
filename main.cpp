#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    std::cout << "Original vector: ";
    printVector(numbers);

    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted vector: ";
    printVector(numbers);

    return 0;
}
