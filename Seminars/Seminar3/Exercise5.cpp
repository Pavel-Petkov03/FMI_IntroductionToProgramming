#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    if (number == 1)
    {
        cout << "true" << endl;
        return 0;
    }
    
    while (number != 1)
    {
        if (number % 2 == 0)
        {
           number /= 2;
        }else{
            cout << "false" << endl;
            return 0;
        }
        
    }
    cout << "true";
    return 0;
    
}