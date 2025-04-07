/* Program name : hauntingScore.cpp
* Author : Anthony Zrebiec
* Date last updated: 4/2/2025
* Purpose : To read data from a file and display whether a place is haunted
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;


int main()
{
    ifstream inFile;
    string eventCode;
    string ending = "Great job! On to the next one!";
    string haunted = "This place is haunted.";
    string notHaunted = "This place is probably not haunted.";
    int instances;
    int points;
    int ePoints; 
    int sPoints;
    int fPoints;
    int aPoints;
    int oPoints;
    int dPoints;
    int tPoints;
    int hauntingScore;

    inFile.open("C:\\Users\\antho\\OneDrive\\Computer Science\\Module 2\\ghosts.txt");

    cout << "Analyzing Ghost Hunt Data..." << endl;
    inFile >> eventCode >> instances;

    if (eventCode == "E" || eventCode == "e")
    {
        ePoints = instances * 3;
        cout << "Found " << instances << " of EVP." << endl;
    }
    else if (eventCode == "S" || eventCode == "s")
    {
        sPoints = instances * 1;
        cout << "Found " << instances << " of shadows or obs." << endl;
    }
    else if (eventCode == "F" || eventCode == "f")
    {
        fPoints = instances * 2;
        cout << "Found " << instances << " of footsteps." << endl;
    }
    else if (eventCode == "A" || eventCode == "a")
    {
        aPoints = instances * 5;
        cout << "Found " << instances << " of full body apparition." << endl;
    }
    else if (eventCode == "O" || eventCode == "o")
    {
        oPoints = instances * 5;
        cout << "Found " << instances << " of objects moving on own." << endl;
    }
    else if (eventCode == "D" || eventCode == "d")
    {
        dPoints = instances * 3;
        cout << "Found " << instances << " of doors shutting on own." << endl;
    }
    else if (eventCode == "T" || eventCode == "t")    
    {
        tPoints = instances * 2;
        cout << "Found " << instances << " of ThermoCamera hot or cold spots." << endl;
    }
    else 
    {
        cout << "Invalid event code." << endl;
        return 1; // Exit the program with an error code
    }
    inFile >> eventCode >> instances;

    if (eventCode == "E" || eventCode == "e")
    {
        ePoints = instances * 3;
        cout << "Found " << instances << " of EVP." << endl;
    }
    else if (eventCode == "S" || eventCode == "s")
    {
        sPoints = instances * 1;
        cout << "Found " << instances << " of shadows or obs." << endl;
    }
    else if (eventCode == "F" || eventCode == "f")
    {
        fPoints = instances * 2;
        cout << "Found " << instances << " of footsteps." << endl;
    }
    else if (eventCode == "A" || eventCode == "a")
    {
        aPoints = instances * 5;
        cout << "Found " << instances << " of full body apparition." << endl;
    }
    else if (eventCode == "O" || eventCode == "o")
    {
        oPoints = instances * 5;
        cout << "Found " << instances << " of objects moving on own." << endl;
    }
    else if (eventCode == "D" || eventCode == "d")
    {
        dPoints = instances * 3;
        cout << "Found " << instances << " of doors shutting on own." << endl;
    }
    else if (eventCode == "T" || eventCode == "t")    
    {
        tPoints = instances * 2;
        cout << "Found " << instances << " of ThermoCamera hot or cold spots." << endl;
    }
    else 
    {
        cout << "Invalid event code." << endl;
        return 1; // Exit the program with an error code
    }
    inFile >> eventCode >> instances;

    if (eventCode == "E" || eventCode == "e")
    {
        ePoints = instances * 3;
        cout << "Found " << instances << " of EVP." << endl;
    }
    else if (eventCode == "S" || eventCode == "s")
    {
        sPoints = instances * 1;
        cout << "Found " << instances << " of shadows or obs." << endl;
    }
    else if (eventCode == "F" || eventCode == "f")
    {
        fPoints = instances * 2;
        cout << "Found " << instances << " of footsteps." << endl;
    }
    else if (eventCode == "A" || eventCode == "a")
    {
        aPoints = instances * 5;
        cout << "Found " << instances << " of full body apparition." << endl;
    }
    else if (eventCode == "O" || eventCode == "o")
    {
        oPoints = instances * 5;
        cout << "Found " << instances << " of objects moving on own." << endl;
    }
    else if (eventCode == "D" || eventCode == "d")
    {
        dPoints = instances * 3;
        cout << "Found " << instances << " of doors shutting on own." << endl;
    }
    else if (eventCode == "T" || eventCode == "t")    
    {
        tPoints = instances * 2;
        cout << "Found " << instances << " of ThermoCamera hot or cold spots." << endl;
    }
    else 
    {
        cout << "Invalid event code." << endl;
        return 1; // Exit the program with an error code
    }
    hauntingScore = sPoints  + aPoints + dPoints;
    cout << "The haunting score for this place is " << hauntingScore << "." << endl;
    if (hauntingScore > 15)
    {
        cout << haunted << endl;
    }
    else if (hauntingScore <= 15)
    {
        cout << notHaunted << endl;
    }
    cout << ending << endl;
    


}