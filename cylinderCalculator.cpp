// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep.26, 2022
// This program calculates the cost of a pizza order.

#include <iomanip>
#include <iostream>
#include <cmath>

int main()  {
    // Assigning variables
    std::string units;
    float radius;
    float diameter;
    float userChoice;
    float height;
    float surfaceArea;
    float volume;

    // Asks the user for the units of the cylinder
    std::cout << "Enter the units of the cylinder's"
    " dimensions: \n";
    std::cout << ">> ";
    std::cin >> units;
    std::cout << "\n";
    // Asks the user if they want to enter
    // the radius or diameter of the cylinder
    std::cout << "Enter 1 if you want to enter the"
     " radius of the cylinder. \n\n";
    std::cout << "Enter a number other than 1 to enter"
     " the diameter of the cylinder \n";
    std::cout << ">> ";
    std::cin >> userChoice;
    std::cout << "\n";
    // Asks the user to input the radius and height
    if (userChoice == 1)  {
        std::cout << "Enter the radius of the cylinder in "
         << units << "." << std::endl;
        std::cout << ">> ";
        std::cin >> radius;
        std::cout << "Enter the height of the cylinder in "
         << units << "." << std::endl;
        std::cout << ">> ";
        std::cin >> height;
        std::cout << "\n";
        // Code below is executed if the
        // user entered a number equal to 0 or less
        while (radius <= 0 || height <= 0)  {
            std::cout << "One or more of your answers"
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
        }
        // If the user chooses to enter the diameter of the cylinder
        } else {
            std::cout << "Enter the diameter of the cylinder in "
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
            std::cout << "\n";
        }

    surfaceArea = 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2);
    volume = M_PI * pow(radius, 2) * height;
    std::cout << "The surface area of the cylinder is ";
    std::cout << std::fixed << std::setprecision(2)
     << std::setfill('0') << surfaceArea;
    std::cout << "cm^2. \n" << std::endl;
    std::cout << "The volume of the cylinder is ";
    std::cout << std::fixed << std::setprecision(2)
     << std::setfill('0') << volume;
    std::cout << "cm^3." << std::endl;
}
