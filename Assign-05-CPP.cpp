// Copyright (c) 2025 Sarah OUAMOU All rights reserved.
// Date: 12-30-2025
// This program calculates the missing side of a right triangle
// using the Pythagorean Theorem.

#include <iostream>

double pythagorean_theorem(double value1, double value2, int option) {
    if (option == 1) {
        return (value1 * value1 + value2 * value2) * 0.5;
    } else {
        return (value1 * value1 - value2 * value2) * 0.5;
    }
}

int main() {
    std::cout << "Welcome to Sarah's Pythagorean Theorem Calculator!\n";

    int choice = 0;

    while (true) {
        std::cout << "1 - Base and Height\n";
        std::cout << "2 - Hypotenuse and One Side\n";
        std::cout << "Choose an option (1 or 2): ";
        std::cin >> choice;

        if (std::cin.fail() || (choice != 1 && choice != 2)) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Invalid choice. Please enter 1 or 2.\n";
            continue;
        }

        if (choice == 1) {
            double base = 0.0;
            double height = 0.0;

            std::cout << "Enter the base: ";
            std::cin >> base;
            std::cout << "Enter the height: ";
            std::cin >> height;

            if (base <= 0 || height <= 0) {
                std::cout << "Values must be positive.\n";
                continue;
            }

            double result = pythagorean_theorem(base, height, 1);
            std::cout << "The hypotenuse is: " << result << "\n";
        } else {
            double hypotenuse = 0.0;
            double side = 0.0;

            std::cout << "Enter the hypotenuse: ";
            std::cin >> hypotenuse;
            std::cout << "Enter the known side: ";
            std::cin >> side;

            if (hypotenuse <= side || side <= 0) {
                std::cout << "Invalid values.\n";
                continue;
            }

            double result = pythagorean_theorem(hypotenuse, side, 2);
            std::cout << "The missing side is: " << result << "\n";
        }

        break;
    }
}
