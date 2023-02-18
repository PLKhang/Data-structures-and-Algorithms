#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!\n";

    int t{4};
    t = 8;

    for(int i = 0; i < t; i++)
        cout << i << " ";
    cout << '\n';
    
    return 0;
}