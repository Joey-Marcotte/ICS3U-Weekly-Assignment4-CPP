// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program shows which number is greater
// with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string firstNumberAsString;
    int firstNumberAsNumber;
    std::string secondNumberAsString;
    int secondNumberAsNumber;
    std::string thirdNumberAsString;
    int thirdNumberAsNumber;
    int totalNumber;


    while (true) {
        // input
        std::cout << "Input a number: ";
        std::cin >> firstNumberAsString;
        std::cout << "Input another number: ";
        std::cin >> secondNumberAsString;
        std::cout << "Input a third number: ";
        std::cin >> thirdNumberAsString;
        try {
            firstNumberAsNumber = std::stoi(firstNumberAsString);
            secondNumberAsNumber = std::stoi(secondNumberAsString);
            thirdNumberAsNumber = std::stoi(thirdNumberAsString);
            if (firstNumberAsNumber <= 100 && secondNumberAsNumber <= 100 &&
                thirdNumberAsNumber <= 100) {
                totalNumber = (firstNumberAsNumber + secondNumberAsNumber +
                               thirdNumberAsNumber) / 3;
                std::cout << "The average is " << totalNumber << std::endl;
                break;
            } else {
                std::cout << "Numbers are over 100" << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Not valid numbers inputted" << std::endl;
        }
    }
}
