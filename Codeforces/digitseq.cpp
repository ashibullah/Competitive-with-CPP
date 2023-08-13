#include <iostream>
#include <cmath>
#include <string>

char findKthDigit(int k) {
    long long start = 1;
    int digits = 1;

    // Find the range where the k-th digit lies
    while (k > 9 * start * digits) {
        k -= 9 * start * digits;
        start *= 10;
        digits++;
    }

    // Find the exact number where the k-th digit lies
    long long number = start + (k - 1) / digits;

    // Find the k-th digit in the number
    std::string numStr = std::to_string(number);
    char kthDigit = numStr[(k - 1) % digits];

    return kthDigit;
}

int main() {
    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    char kthDigit = findKthDigit(k);
    std::cout << "The " << k << "-th digit in the sequence is: " << kthDigit << std::endl;

    return 0;
}
