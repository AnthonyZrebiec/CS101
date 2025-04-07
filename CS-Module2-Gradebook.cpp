/* Program name: Gradebook.cpp
* Author: Anthony Zrebiec
* Date last updated: 3/26/2025
* Purpose: Create Table from grade's document
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    // declaring variables
    ifstream inFile;
    ofstream outFile;
    
    int studentID;
    string firstName;
    string lastName;

    double gradePercent;
    char gradeLetter;

    // open file
    inFile.open("C:\\Gradebook.txt");

    // creating border for table
    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;

    // creating table headings
    cout << left << "|" << " Student Num";
    cout << right << setw(4) <<  setfill(' ') << "|" << " Student Name" << setw(18) << "|" << " Percent" << setw(3) << "|" << " Grade" << setw(4) << "|" << endl;

    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;

    // importing data from file
    cout << "| ";
    inFile >> studentID >> firstName >> lastName;
    cout << studentID << setw(11) << setfill(' ') << "| " << firstName << " " << lastName << setw(19) << setfill(' ') << "| ";
    inFile >> gradePercent;
    cout << " " << setprecision(5) << gradePercent * 100 << "%" << setw(3) << "| ";
    inFile >> gradeLetter;
    cout << gradeLetter << setw(8) << "|" << endl;

    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;

    cout << "| ";
    inFile >> studentID >> firstName >> lastName;
    cout << studentID << setw(11) << setfill(' ') << "| " << firstName << " " << lastName << setw(14) << setfill(' ') << "| ";
    inFile >> gradePercent;
    cout << " " << setprecision(5) << gradePercent * 100 << "%" << setw(3) << "| ";
    inFile >> gradeLetter;
    cout << gradeLetter << setw(8) << "|" << endl;


    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;


    cout << "| ";
    inFile >> studentID >> firstName >> lastName;
    cout << studentID << setw(11) << setfill(' ') << "| " << firstName << " " << lastName << setw(19) << setfill(' ') << "| ";
    inFile >> gradePercent;
    cout << " " << setprecision(5) << gradePercent * 100 << "%" << setw(3) << "| ";
    inFile >> gradeLetter;
    cout << gradeLetter << setw(8) << "|" << endl;

    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;

    cout << "| ";
    inFile >> studentID >> firstName >> lastName;
    cout << studentID << setw(11) << setfill(' ') << "| " << firstName << " " << lastName << setw(17) << setfill(' ') << "| ";
    inFile >> gradePercent;
    cout << " " << setprecision(5) << gradePercent * 100 << "%" << setw(3) << "| ";
    inFile >> gradeLetter;
    cout << gradeLetter << setw(8) << "|" << endl;

    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;

    cout << "| ";
    inFile >> studentID >> firstName >> lastName;
    cout << studentID << setw(11) << setfill(' ') << "| " << firstName << " " << lastName << setw(18) << setfill(' ') << "| ";
    inFile >> gradePercent;
    cout << " " << setprecision(5) << gradePercent * 100 << "%" << setw(3) << "| ";
    inFile >> gradeLetter;
    cout << gradeLetter << setw(8) << "|" << endl;

    cout << "+" << setw(16) << setfill('-') << "+" << setw(31) <<setfill('-') << "+" << setw(11) << setfill('-') << "+" << setw(10) << setfill('-') << "+" << endl;


    inFile.close();

    return 0;





}
