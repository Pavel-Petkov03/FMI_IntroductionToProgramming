#include <iostream>

using namespace std;
int main(){
    int hours, minutes;
    cin >> hours >> minutes;
    int allMinutes = 60 * hours + minutes + 15;
    int finalHours = allMinutes  / 60;
    int finalMinutes = allMinutes - finalHours * 60;
    if (finalHours <= 9)
    {
        if (finalMinutes <= 9)
        {
            cout << "0" << finalHours << ":" << "0" << finalMinutes << endl;
        }else{
            cout << "0" << finalHours << ":" << finalMinutes << endl;
        }
        
    }else{
        if (finalMinutes <= 9)
        {
            cout <<  finalHours << ":" << "0" << finalMinutes << endl;
        }else{
            cout << finalHours << ":" << finalMinutes << endl;
        }
    }
}