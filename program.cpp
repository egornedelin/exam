#include <iostream>

int main() {
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (number % 2 == 0) {
        std::cout << number << " - четное число." << std::endl;
    } else {
        std::cout << number << " - нечетное число." << std::endl;
    }

    return 0;
}

