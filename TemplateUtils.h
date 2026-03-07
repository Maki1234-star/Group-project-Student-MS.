#ifndef TEMPLATEUTILS_H
#define TEMPLATEUTILS_H

#include <iostream>
#include <limits>
#include <string>

template <typename T>
T getValidatedInput(const std::string& prompt) {
    T value;

    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (!std::cin.fail()) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please try again." << std::endl;
    }
}

template <>
inline std::string getValidatedInput<std::string>(const std::string& prompt) {
    std::string value;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, value);

        if (!value.empty()) {
            return value;
        }

        std::cout << "Input cannot be empty. Please try again." << std::endl;
    }
}

template <typename T>
void displayValue(const std::string& label, const T& value) {
    std::cout << label << value << std::endl;
}

#endif