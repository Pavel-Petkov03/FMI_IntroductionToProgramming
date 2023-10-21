#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int number;
    cin >> number;
    int numberCounter = 1;
    int divider = 10;
    int finalNumber = 0;
    while (number % divider != number)
     {
        divider *= 10;
        numberCounter++;
     }
    
    cout << divider << endl;
    int moves = numberCounter / 2;

    if (numberCounter % 2 == 0)
    {
       moves--;
    }
    for (int i = 1; i < moves+1; i++)
    {
        cout << number / pow(10 , moves) << endl;
    }
    
    
    
}
