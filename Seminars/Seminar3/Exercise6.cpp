#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int a, b ,c ,d , e;
    cin >> a >> b >> c >> d >> e;
    for (int x = -100; x <= 100; x++)
    {
        if ((a * pow(x, 4) + b * pow(x, 3) + c * pow(x , 2) + d * x + e)  >= 0)
        {
            cout << x << " ";
        }
        
    }
    
}