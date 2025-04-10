/* Program name main.cpp
* Author: Anthony Zrebiec
* Date last updated: 3/24/2025
* Purpose: Convert binary into decimal
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    int v, w, x, y, z; // designates variables entered by the user
    int dec; // designates variable of the decimal
    int num; 
    std::cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): "; // prints: Enter the 1st binary digit:
    std::cin >> v; // enables user enter first binary digit
    //dec = z + y * 2 + x * 4 + w * 8 + v * 16; 
    dec = 0;
    while (true) 
    {
        if (v == -1) // checks if the first binary digit is -1
        {
            std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0
            return 0; // exits the loop if the first binary digit is -1
        }
        else if (v != 0 && v != 1) // checks if the first binary digit is not 0 or 1
        {
            std::cout <<  "A binary digit can only be 1 or 0. " << endl; // prints: A binary digit can only be 1 or 0.
            std::cout << "Enter the 1st binary digit (Enter -1 to complete the conversion): "; // prints: Enter the 1st binary digit:
            std::cin >> v; // enables user enter first binary digit again
        }
        else if (v == 0 || v == 1) // checks if the first binary digit is 0 or 1   
            num = v * 16; // converts the first binary digit into decimal
            dec = dec + num; // adds the decimal value of the first binary digit to the total decimal value
        break; // exits the loop if the first binary digit is 0 or 1
    }   


    std::cout << "Enter the 2nd binary digit (Enter -1 to complete the conversion): "; // prints: Enter the 2nd binary digit:
    std::cin >> w; // enables the user enter second binary digit
    while (true) 
    {
        if (w == -1) // checks if the first binary digit is -1
        {
            std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0
            return 0; // exits the loop if the first binary digit is -1
        }
        else if (w != 0 && w != 1) // checks if the first binary digit is not 0 or 1
        {
            std::cout <<  "A binary digit can only be 1 or 0. " << endl; // prints: A binary digit can only be 1 or 0.
            std::cout << "Enter the 2nd binary digit: (Enter -1 to complete the conversion): ";
            std::cin >> w; // enables user enter first binary digit again
        }
        else if (w == 0 || w == 1) // checks if the first binary digit is 0 or 1   
            num = w * 8; // converts the first binary digit into decimal
            dec = dec + num; // adds the decimal value of the first binary digit to the total decimal value
        break; // exits the loop if the first binary digit is 0 or 1
    }    

    std::cout << "Enter the 3rd binary digit (Enter -1 to complete the conversion): "; // prints: Enter the 3rd binary digit:
    std::cin >> x; // enables the user enter the third binary digit
    while (true) 
    {
        if (x == -1) // checks if the first binary digit is -1
        {
            std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0
            return 0; // exits the loop if the first binary digit is -1
        }
        else if (x != 0 && x != 1) // checks if the first binary digit is not 0 or 1
        {
            std::cout <<  "A binary digit can only be 1 or 0. " << endl; // prints: A binary digit can only be 1 or 0.
            std::cout << "Enter the 3rd binary digit (Enter -1 to complete the conversion): ";
            std::cin >> x; // enables user enter first binary digit again
        }
        else if (x == 0 || x == 1) // checks if the first binary digit is 0 or 1   
            num = x * 4; // converts the first binary digit into decimal
            dec = dec + num; // adds the decimal value of the first binary digit to the total decimal value
        break; // exits the loop if the first binary digit is 0 or 1
    }    

    std::cout << "Enter the 4th binary digit (Enter -1 to complete the conversion): "; // prints: Enter 4th binary digit:
    std::cin >> y; // enables user enter fourth binary digit
    while (true) 
    {
        if (y == -1) // checks if the first binary digit is -1
        {
            std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0
            return 0; // exits the loop if the first binary digit is -1
        }
        else if (y != 0 && y != 1) // checks if the first binary digit is not 0 or 1
        {
            std::cout <<  "A binary digit can only be 1 or 0. " << endl; // prints: A binary digit can only be 1 or 0.
            std::cout << "Enter the 4th binary digit (Enter -1 to complete the conversion): ";
            std::cin >> y; // enables user enter first binary digit again
        }
        else if (y == 0 || y == 1) // checks if the first binary digit is 0 or 1   
            num = y * 2; // converts the first binary digit into decimal
            dec = dec + num; // adds the decimal value of the first binary digit to the total decimal value    
        break; // exits the loop if the first binary digit is 0 or 1
    }    

    std::cout << "Enter the 5th binary digit (Enter -1 to complete the conversion): "; // prints: Enter 5th binary digit:
    std::cin >> z; // enables user enter fifth binary digit
    while (true) 
    {
        if (z == -1) // checks if the first binary digit is -1
        {
            std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0
            return 0; // exits the loop if the first binary digit is -1
        }
        else if (z != 0 && z != 1) // checks if the first binary digit is not 0 or 1
        {
            std::cout <<  "A binary digit can only be 1 or 0. " << endl; // prints: A binary digit can only be 1 or 0.
            std::cout << "Enter the 5th binary digit (Enter -1 to complete the conversion): ";
            std::cin >> z; // enables user enter first binary digit again
        }
        else if (z == 0 || z == 1) // checks if the first binary digit is 0 or 1   
            num = z * 1; // converts the first binary digit into decimal
            dec = dec + num; // adds the decimal value of the first binary digit to the total decimal value   
        break; // exits the loop if the first binary digit is 0 or 1
    }    

    std::cout << "Your number in decimal is " << dec << std::endl; // prints: Your number in decimal is 0


    return 0;
}
