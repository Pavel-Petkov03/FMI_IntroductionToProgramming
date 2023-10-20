#include <iostream>
using namespace std;
int main(){
    int numberOne, numberTwo;
    cin >> numberOne >> numberTwo;
    int result = (((numberOne - numberTwo) <= 0) * numberTwo) + (((numberTwo - numberOne) <=0) * numberOne);
    cout << result << endl;
    return 0; 
}