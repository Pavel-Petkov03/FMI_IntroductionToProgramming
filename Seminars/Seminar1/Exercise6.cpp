#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    // int result = pow(a + b, 4) - pow(a-b, 2); Това е със pow и import на cmath
    int result = (a+b) * (a +b) * (a+b) * (a+b) - ((a-b) * (a -b));
    cout << result << endl;
}