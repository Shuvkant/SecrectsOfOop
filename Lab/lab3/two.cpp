#include <iostream>
// #include <cmath>
#include<cmath>

class primeNumber {
public:
    int testPrime(int n) {
        if (n <= 1) {
            return 0;
        }
        int sqrtN = sqrt(n);
        for (int i = 2; i <= sqrtN; ++i) {
            if (n % i == 0) {
                return 0;
            }
        }
        return 1;
    }
};

int main() {
    char choice;
    do {
        int n;
        std::cout << "Enter a number: ";
        std::cin >> n;

        primeNumber checker;
        int testPrime = checker.testPrime(n);
        if (testPrime) {
            std::cout << n << " is prime.\n";
        } else {
            std::cout << n << " is not prime.\n";
        }

        std::cout << "Do you want to check another number? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}