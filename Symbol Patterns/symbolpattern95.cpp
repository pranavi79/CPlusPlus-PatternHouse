#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= j; k++) 
                cout << "* ";
            cout << endl;
        }
    }
    return 0;
}
