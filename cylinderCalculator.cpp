// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep.26, 2022
// This program calculates the cost of a pizza order.

#include <iomanip>
#include <iostream>
#include <cmath>

// Defining colours to be used in terminal output
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */
int main()  {
    // Assigning variables
    std::string units;
    float radius, diameter, userChoice,
     height, surfaceArea, volume;

    // Asks the user for the units of the cylinder
    std::cout << MAGENTA << "Enter the units of the cylinder's"
    " dimensions: \n";
    std::cout << ">> ";
    std::cin >> units;
    std::cout << "\n" << RESET;
    // Asks the user if they want to enter
    // the radius or diameter of the cylinder
    std::cout << YELLOW << "Enter 1 if you want to enter the"
     " radius of the cylinder. \n\n";
    std::cout << "Enter a number other than 1 to enter"
     " the diameter of the cylinder \n";
    std::cout << ">> ";
    std::cin >> userChoice;
    std::cout << "\n" << RESET;
    // Asks the user to input the radius and height
    if (userChoice == 1)  {
        std::cout << MAGENTA << "Enter the radius of the cylinder in "
         << units << "." << std::endl;
        std::cout << ">> ";
        std::cin >> radius;
        std::cout << "Enter the height of the cylinder in "
         << units << "." << std::endl;
        std::cout << ">> ";
        std::cin >> height;
        std::cout << "\n" << RESET;
        // Code below is executed if the
        // user entered a number equal to 0 or less
        while (radius <= 0 || height <= 0)  {
            std::cout << RED << "One or more of your answers"
             "is equal to 0 or less \n\n";
            std::cout << "Please try again \n\n";
            std::cout << "Enter the radius of the cylinder in "
             << units << "." << std::endl;
            std::cout << ">> ";
            std::cin >> radius;
            std::cout << "Enter the height of the cylinder in "
             << units << "." << std::endl;
            std::cout << ">> ";
            std::cin >> height;
            std::cout << "\n" << RESET;
        }
        // If the user chooses to enter the diameter of the cylinder
        } else {
            std::cout << MAGENTA << "Enter the diameter of the cylinder in "
             << units << "." << std::endl;
            std::cout << ">> ";
            std::cin >> diameter;
            // Converts the diameter to the radius
            // by dividing the diameter by 2
            radius = diameter / 2;
            std::cout << "\n";
            std::cout << "Enter the height of the cylinder in "
             << units << "." << std::endl;
            std::cout << ">> ";
            std::cin >> height;
            std::cout << "\n" << RESET;
        }

    surfaceArea = 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2);
    volume = M_PI * pow(radius, 2) * height;
    std::cout << GREEN << "The surface area of the cylinder is ";
    std::cout << std::fixed << std::setprecision(2)
     << std::setfill('0') << surfaceArea;
    std::cout << "cm^2. \n" << std::endl;
    std::cout << "The volume of the cylinder is ";
    std::cout << std::fixed << std::setprecision(2)
     << std::setfill('0') << volume;
    std::cout << "cm^3." << RESET << std::endl;
}
