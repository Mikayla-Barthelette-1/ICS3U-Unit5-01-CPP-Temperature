// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Oct 2021
// This program converts from celsius to fahrenheit

#include <iostream>
#include <string>

void CalculateFahrenheit() {
    // calculate fahrenheit

    std::string userInput;
    float celsius;
    float fahrenheit;

    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> userInput;

    // process
    try {
        celsius = std::stoi(userInput);
        fahrenheit = celsius * 1.8 + 32;
        // would not do math properly with (9 / 5)
        std::cout << celsius << "°C is equal to " << fahrenheit <<
        "°F."  << std::endl;
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input"  << std::endl;
        std::cout << std::endl;
    }
}

main() {
    // this function just calls other functions

    // call functions
    CalculateFahrenheit();

     // output
    std::cout << "Done." << std::endl;
}
