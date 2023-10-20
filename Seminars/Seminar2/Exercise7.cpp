#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double x, y;
    cin >> radius >> x >> y;
    double distanceToPointSquared = x * x + y * y;
    if (distanceToPointSquared > radius*radius) {
        cout << "Out of the circle" << endl;
    }
    else if (distanceToPointSquared < radius*radius) {
        cout << "In the circle" << endl;
    }
    else {
        cout << "On the circle" << endl;
    }

    return 0;
}