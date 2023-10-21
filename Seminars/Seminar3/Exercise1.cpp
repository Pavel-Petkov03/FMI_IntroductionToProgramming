#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    int sumOfNumbers = number;
    while (number != 0)
    {
        cin >> number;
        sumOfNumbers += number;
    }
    cout << sumOfNumbers << endl;
    
}