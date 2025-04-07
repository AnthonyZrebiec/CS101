/* Program name : Mod3-RAM.cpp
 * Author :  Anthony Zrebiec
 * Date :    4/2/2025
 * Purpose : This program checks if the user has sufficient RAM for a selected task.
 
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()    
{
    // Declare variables
    int ram;
    int task;
    string choose = "Choose the task you want to do on your computer from the following list:";
    string aStudio = "1. Android Studio";
    string vStudio = "2. Visual Studio Code";
    string gaming = "3. Gaming" ;
    string web = "4. Web Browsing with Chrome";
    string multiProgram = "5. Multiple Programming Tasks (both Android Studio and Visual Studio Code)";
    string zoom = "6. Zoom";
    string email = "7. Email";
    string createDoc = "8. Create and edit documents";
    string everything = "9. Everything listed above";
    string congrats = "Congratulations! You have sufficient RAM for your task.";
    string sorry = "Sorry! You do not have sufficient RAM for your task.";
    string invalid = "You have entered an invalid value.  The program will be unable to continue. Exiting."; 

    // Request user input for RAM
    cout << "Enter the amount of RAM in GB: ";
    cin >> ram;
    cout << endl;

    // Check if RAM is a valid number
    {
        if (ram > 0) {
             cout << ram << endl;
     } else {
            cout << sorry << endl;
            exit(0);
     }    

    }

    // Display task options and get user input for task
    cout << choose << endl;
    cout << aStudio << endl;    
    cout << vStudio << endl;
    cout << gaming << endl; 
    cout << web << endl;
    cout << multiProgram << endl;
    cout << zoom << endl;
    cout << email << endl;
    cout << createDoc << endl;
    cout << everything << endl;
    cin >> task;
    cout << endl;

    // Check if task is a valid number
    // if valid, check if RAM is sufficient for the task
    switch (task)
    {
    case 1:
        if (ram >= 12)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 2:
        if (ram >= 8)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 3: 
        if (ram >= 16)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 4: 
        if (ram >= 8)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 5: 
        if (ram >= 20)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;      
    case 6: 
        if (ram >= 8)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 7: 
        if (ram >= 6)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 8:
        if (ram >= 6)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    case 9:
        if (ram >= 32)
            cout << congrats << endl;
        else
            cout << invalid << endl;
        break;
    default:
        cout << invalid << endl;
        break;
    }

return 0;

    


    



}

