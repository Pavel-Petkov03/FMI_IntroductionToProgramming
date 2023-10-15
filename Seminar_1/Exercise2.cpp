#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    int firstNum = number / 100;
    int firstAndSecondNum = number / 10;
    int secondNum = firstAndSecondNum - 10 * firstNum;
    int thirdNum = number - 10 * firstAndSecondNum;
    int finalResult = thirdNum * 100 + secondNum * 10 + firstNum + 1;
    cout << finalResult << endl;
    return 0;
}