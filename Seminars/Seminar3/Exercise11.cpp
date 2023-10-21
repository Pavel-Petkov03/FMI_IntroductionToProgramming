#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int start = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            
            if (i % 2 == 0)
            {
                start++;
            }
            else {
                if (j == 0)
                {
                    start = (i + 1) * n;
                }
                else {
                    start--;
                }
            }
            cout << start << " ";
            
        }
        cout << endl;
    }
}