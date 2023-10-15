#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double x, y;
    cin >> radius >> x >> y;
    double distanceToPoint = sqrt(x * x + y * y);
    if (distanceToPoint > radius) {
        cout << "Out of the circle" << endl;
    }
    else if (distanceToPoint < radius) {
        cout << "In the circle" << endl;
    }
    else {
        cout << "On the circle" << endl;
    }

    return 0;
}