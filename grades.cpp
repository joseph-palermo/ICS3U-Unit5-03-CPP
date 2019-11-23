// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program shows the user a grade in a percentage

#include <iostream>
#include <string>


int Calculate(char grade[]) {
    // This function  calculates the user's grade as a percentage

    // variables
    int percentage;

    // process
    switch (grade[0]) {
        case '4' :
            if (grade[1] == '+') {
                percentage = 100;
            } else if (grade[1] == '-') {
                percentage = 83;
            } else {
                percentage = 90;
            }
            break;
        case '3' :
            if (grade[1] == '+') {
                percentage = 78;
            } else if (grade[1] == '-') {
                percentage = 71;
            } else {
                percentage = 75;
            }
            break;
        case '2' :
            if (grade[1] == '+') {
                percentage = 68;
            } else if (grade[1] == '-') {
                percentage = 61;
            } else {
                percentage = 65;
            }
            break;
        case '1' :
            if (grade[1] == '+') {
                percentage = 58;
            } else if (grade[1] == '-') {
                percentage = 51;
            } else {
                percentage = 55;
            }
            break;
        case '0' :
        if (grade[1] == '+') {
                percentage = 45;
            } else if (grade[1] == '-') {
                percentage = 0;
            } else {
                percentage = 35;
            }
            break;
        default :
            percentage = -1;
    }
    return percentage;
}

int main() {
    // this function asks for a grade and outputs the grade in a percentage

    // variables
    char userGrade[10] = "         ";
    int userPercentage;

    // input
    std::cout << "Enter your grade: ";
    std::cin >> userGrade;

    // process
    if (userGrade[1] != '+' && userGrade[1] != '-' && userGrade[1] != 0) {
        userPercentage = -1;
    } else {
        userPercentage = Calculate(userGrade);
    }

    // output
    if (userPercentage == -1) {
        std::cout << "\n";
        std::cout << "Please isnert a valid grade.";
    } else {
        std::cout << "\n";
        std::cout << "Your grade is " << userPercentage << "%";
    }
}
