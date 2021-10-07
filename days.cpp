// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/07/2021
// This is the Day program
// The user enters in the month
// The program displays how many days are in that month

#include <iostream>

int main() {
    // this function checks how many days are in the month
    std::string month;

    // input
    std::cout << "Enter in the month(first letter capitalized): ";
    std::cin >> month;

    // process and output
    if (month == "January") {
        std::cout << "31" << std::endl;
    } else if (month == "February") {
        std::cout << "28/29" << std::endl;
    } else if (month == "March") {
        std::cout << "31" << std::endl;
    } else if (month == "April") {
        std::cout << "30" << std::endl;
    } else if (month == "May") {
        std::cout << "31" << std::endl;
    } else if (month == "June") {
        std::cout << "30" << std::endl;
    } else if (month == "July") {
        std::cout << "31" << std::endl;
    } else if (month == "August") {
        std::cout << "31" << std::endl;
    } else if (month == "September") {
        std::cout << "30" << std::endl;
    } else if (month == "October") {
        std::cout << "31" << std::endl;
    } else if (month == "November") {
        std::cout << "30" << std::endl;
    } else if (month == "December") {
        std::cout << "31" << std::endl;
    } else {
        std::cout << "Not a month" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
