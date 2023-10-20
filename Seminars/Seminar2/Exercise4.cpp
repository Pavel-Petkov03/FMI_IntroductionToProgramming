#include <iostream>
using namespace std;
int main(){
    char task;
    cin >> task;
    switch (task)
    {
    case 's':
        double side;
        cin >> side;
        cout << side * side << endl;
        break;
    case 'r':
       double a , b;
       cin >> a >> b;
       cout << a * b << endl;
       break;
    case 'c':
        double radius;
        cin >> radius;
        double PI = 3.14;
        cout << radius * radius * PI << endl;
        break;
    
    case 'triangle':
        double side , height;
        cout << side * height * 0.5 << endl;
        break;
    default:
        break;
    }
}