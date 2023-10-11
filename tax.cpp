// Copyright Marli Peters 2023
// Created By: Marli Peters
// Date: Oct. 11, 2023
// This program asks the user for a subtotal then
// calculates tax for it in Prince Edward Island.
// It then displays the total and tax.
#include <iostream>

int main() {
    // declare constants
    const float HST = 0.15;

    // declare variables
    float subtotal, tax, total;

    // get subtotal from user
    std::cout << "Enter the subtotal: $";
    std::cin >> subtotal;

    // calculate the total and tax
    tax = subtotal * HST;
    total = subtotal + tax;

    // display total and tax
    std::cout << "\n";
    std::cout << "The total is: $" << total << std::endl;
    std::cout << "The tax is: $" << tax << std::endl;
}
