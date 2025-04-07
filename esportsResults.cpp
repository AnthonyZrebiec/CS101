/* Program name: esportsResults.cpp
*  Author: Anthony Zrebiec
*  Date last updated: 4/7/2025
*  Purpose: Read scores from file and print table then name gold, silver and bronze winners
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>  
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{

    // declaring variables
    ifstream inFile;
    string username;
    int score;
    vector<pair<string, int>> scores; // Vector to store usernames and scores
    vector<string> goldMedal; // Vector to store winners
    vector<string> silverMedal; // Vector to store winners
    vector<string> bronzeMedal; // Vector to store winners

    cout << "IvyGames Tournament Results:" << endl;
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');
	cout << "| " << setw(15) << left << "Username" << "| " << setw(15) << "Score" << "|"<< endl; 
	cout << setw(35) << setfill('-') << "-" << endl;
	cout << setfill(' ');

    // open file
    inFile.open("C:\\Users\\antho\\OneDrive\\Computer Science\\Module 2\\scores.txt");

    // importing data from file
    while (inFile >> username >> score) {
        scores.push_back(make_pair(username, score)); // Store username and score in vector
        cout << setfill(' ');
        cout << "| " << setw(15) << left << username << "| " << setw(15) << score << "|" << endl; 
        cout << setw(35) << setfill('-') << "-" << endl;
	    
    }

    cout << setfill(' ');
    inFile.close();

    // Sort the scores in descending order
    sort(scores.begin(), scores.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    // Determine winners
    if (scores.size() >= 3) {
        goldMedal.push_back(scores[0].first);
        cout << "The gold medal winner is " << goldMedal[0] << " with " << scores[0].second << " points." << endl;
    }
    if (scores.size() >= 2) {
        silverMedal.push_back(scores[1].first);
        cout << "The silver medal winner is " << silverMedal[0] << " with " << scores[1].second << " points." << endl;
    }
    if (scores.size() >= 3) {
        bronzeMedal.push_back(scores[2].first);
        cout << "The bronze medal winner is " << bronzeMedal[0] << " with " << scores[2].second << " points." << endl;
    }

    return 0; // Ensure the main function ends properly
}