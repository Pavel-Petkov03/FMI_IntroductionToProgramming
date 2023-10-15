#include <iostream>

using namespace std;
int main(){
    int a , b , c ,d ,f;
    cin >> a >> b >> c >> d >> f;
    if(((b >= a && b >= c) || (b <= a && b <= c)) && ((c >= b && c >= d) || (c <= b && c <= d)) && ((d >= c && d >= f) || (d <= c && d <= f)))
    {
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
}