#include <iostream>
using namespace std;
int main(){
    int i , j;
    cin >> i>> j;
    int min = i > j ? j : i;
    while (min !=0){
        if (i % min == 0 && j % min == 0)
        {
           cout << min << " ";
        }
        min--;
        
    }
}


using namespace std;
void euclid(){
    int i , j;
    cin >> i >> j;
    int maxNum = i > j ? i : j;
    int minNum = j > i ? i : j;
    while (minNum != 0)
    {
        int temp = maxNum % minNum;
        maxNum = minNum;
        minNum = temp;
        cout << temp << " ";
    }
}