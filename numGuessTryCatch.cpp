// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : October 26th, 2025
// This program displays and calculates the circumference and area of a circle

#include <iostream>
#include <random>
#include <string>

int main() {
    // declare integer to hold random number
    int correctNumber;

    // initialize random seed
    srand((unsigned)time(NULL));

    // generate a random number between 1 and 100
    correctNumber = rand() % 9 + 0;

    // get the guess from the user as a string
    std::string userGuessAsString;
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> userGuessAsString;

    int userGuessAsInt;

    try {
        // convert the user's guess to an int
        userGuessAsInt = std::stoi(userGuessAsString);
        // check if the guess is correct

        // determine whether or not the user guessed correctly
        if (userGuessAsInt == correctNumber) {
            std::cout << "You have guessed the right number! " << std::endl;
        } else {
            std::cout << "You have guessed the wrong number " << std::endl;
            std::cout << "The correct number was: "
                      << correctNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << userGuessAsString << " is not an integer.\n";
    }
}
