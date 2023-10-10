#include <iostream>
using namespace std;
int main(){
    int money;
    cin >> money;
    int hundreds = money / 100;
    money = money - hundreds * 100;
    int fifties = money / 50;
    money = money - fifties * 50;
    int twenties = money / 20;
    money = money - twenties * 20;
    int fives = money / 5;
    money = money - fives * 5;
    int twos = money / 2;
    money = money - twos * 2;
    int ones = money;
    cout << hundreds << "x100lv " << fifties << "x50lv " << twenties << "x20lv " << fives << "x5lv " << twos << "x2lv " << ones << "x1lv " << endl;
    return 0;
}