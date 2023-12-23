#include <iostream>
#include "calculator.h"

int main() {
    // Створення об'єкту класу Calculator
    Calculator myCalculator;

    // Приклад використання функцій класу Calculator
    int resultAdd = myCalculator.add(5, 3);
    int resultSubtract = myCalculator.subtract(8, 4);

    // Виведення результатів
    std::cout << "Addition: " << resultAdd << std::endl;
    std::cout << "Subtraction: " << resultSubtract << std::endl;

    return 0;
}
