#include <iostream>

using namespace std;

int main()
{
    int n, z = 122;
    cout << "Type number N: ";
    cin >> n;
    
    while(n) {
        cout << char(z) << " ";
        --n;
        --z;
        
    }

    return 0;
}
