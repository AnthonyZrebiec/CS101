#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Declare variables
    int temp;
    char crying;
    bool y  = true;
    bool n = false;
    char alarm;

    // Prompt user for input on alarm status 
    cout << "Is alarm on? ";
    cin >> alarm;
    if (alarm == 'y') {
        cout << "The alarm is on" << endl;
    } else if (alarm == 'n') {
        cout << "The alarm is off" << endl;
        exit (0);
    }
  

    // Prompt user for input on temperature and crying status
    cout << "Enter the temperature: ";
    cin >> temp;
    cout << "Is the baby crying? : ";
    cin >> crying;
    
    // Check if the temperature is above 70 or if the baby is crying
    if (temp > 70 || crying == 'y') 
    {
       cout << "The alarm will go off" << endl;
    }
    
    else if (temp < 70 && crying == 'n') 
    {    
        cout << "The alarm will not go off" << endl;
        
    }

    return 0;
}