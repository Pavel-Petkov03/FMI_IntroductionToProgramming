#include <iostream>
using namespace std;
int main(){
    char character;
    cin >> character;
    int number = character;
    int lowerASCICharBoundary = 65;
    int upperASCICharBoundary = 122;
    bool inBonds = number >= lowerASCICharBoundary && number <= upperASCICharBoundary;
    cout << inBonds << endl;
    return 0;
}