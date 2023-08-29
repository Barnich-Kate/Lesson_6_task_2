#include <iostream>

using namespace std;

int main()
{
    int N;
    cout <<"Type number N from 1 to 26: " << endl;
    cin >> N;
    for (char c ='A'; c <'A'+ N; ++c){
    cout << c <<" ";
    }

    return 0;
}
