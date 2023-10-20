#include <iostream>

using namespace std;
int main(){
    int day;
    cin >> day;
    string message;
    switch (day)
    {
    case 1:
        message = "Monday";
        break;
    case 2:
        message = "Tuesday";
        break;
    
    case 3:
        message = "Wednesday";
        break;
    
    case 4:
        message = "Thursday";
        break;
    
    case 5:
        message = "Friday";
        break;
    case 6:
        message = "Saturday";
        break;

    case 7:
        message = "Sunday";
        break;
    
    default:
        message = "Invalid day!";
        break;
    }
    cout << message << endl;
}