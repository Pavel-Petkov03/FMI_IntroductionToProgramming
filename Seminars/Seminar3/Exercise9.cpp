#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= 2*n - 1; i++)
    {        
        int count = i;
        if (count > n)
        {
            count = 2*n - i;
        }
        
        for (int j = n; j > 0; j--)

        {
            if (j >  count)
            {
                cout << " ";
            }else{
                cout << j;
            }
            
        }
        cout << endl;
    }
}
    
