#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i < n; i++){
        int start = i+1;
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                if (j != 0)
                {
                   start += 2 * i + 1;
                }
            }else{
                start += 2*n - 2*i - 1;
            }
            cout << start << " ";
        }
        cout << endl;
    }
}