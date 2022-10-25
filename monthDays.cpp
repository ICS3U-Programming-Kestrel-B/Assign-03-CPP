// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 24, 2022
// This program asks for a month and
// year and tells the user how many
// days are/were in that month

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Declaring variables
    int userYear, monthNum;
    std::string userYearString;
    std::string userMonth;

    // Introductory paragraph
    std::cout << "This program asks for a month and\n";
    std::cout << "year and tells the user how many\n";
    std::cout << "days are/were in that month\n";
    std::cout << "\n";

    // Input
    // Getting userYearString
    std::cout << "Enter a year: ";
    std::cin >> userYearString;

    std::cout << "\n";

    // Getting userMonth
    std::cout << "Enter a month: ";
    std::cin >> userMonth;

    // Process
    // Checking that userYearString is an integer
    try {
        userYear = std::stoi(userYearString);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number. ";
        std::cout << userYearString;
        std::cout << " is not valid.\n";
    }

    // Adding value to monthNum
    if (userMonth == "January") {
        monthNum = 31;
    } else if (userMonth == "February") {
        monthNum = 28;
    } else if (userMonth == "March") {
        monthNum = 31;
    } else if (userMonth == "April") {
        monthNum = 30;
    } else if (userMonth == "May") {
        monthNum = 31;
    } else if (userMonth == "June") {
        monthNum = 30;
    } else if (userMonth == "July") {
        monthNum = 31;
    } else if (userMonth == "August") {
        monthNum = 31;
    } else if (userMonth == "September") {
        monthNum = 30;
    } else if (userMonth == "October") {
        monthNum = 31;
    } else if (userMonth == "November") {
        monthNum = 30;
    } else if (userMonth == "December") {
        monthNum = 31;
    } else {
        std::cout << "Please check your month's spelling.";
    }

    // Checking if userMonth is february
    if (userMonth == "February") {
        // Checking if userYear is a leap year
        if (userYear % 4 == 0) {
            if (userYear % 100 == 0) {
                if (userYear % 400 == 0) {
                    // Is a leap year
                    std::cout << userYear;
                    std::cout << " is a leap year,";
                    std::cout << " so ";
                    std::cout << userMonth;
                    std::cout << " has 29 days.";
                } else {
                    // Is not a leap year
                    std::cout << userMonth;
                    std::cout << " has ";
                    std::cout << monthNum;
                    std::cout << " days in ";
                    std::cout << userYear;
                    std::cout << ".";
                }
            } else {
                // Is a leap year
                std::cout << userYear;
                std::cout << " is a leap year,";
                std::cout << " so ";
                std::cout << userMonth;
                std::cout << " has 29 days.";
            }
        } else {
            // Is not a leap year
            std::cout << userMonth;
            std::cout << " has ";
            std::cout << monthNum;
            std::cout << " days in ";
            std::cout << userYear;
            std::cout << ".";
        }
    } else {
        // Is not a leap year
        std::cout << userMonth;
        std::cout << " has ";
        std::cout << monthNum;
        std::cout << " days in ";
        std::cout << userYear;
        std::cout << ".";
    }
}
