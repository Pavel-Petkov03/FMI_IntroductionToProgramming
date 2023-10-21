#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int start , end;
    cin >> start >> end;
    for (int i = start; i < end; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
            
        }
        if (isPrime)
        {
            cout << i  << " ";
        }
    }
    
}