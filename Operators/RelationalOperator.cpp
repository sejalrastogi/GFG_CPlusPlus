#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    bool res = (x < y); //1
    cout << res << endl;
    res = (x > y); //0
    cout << res << endl;
    if (x < y)
        cout << "x is smaller\n";
    else
        cout << "x is greater\n";
    return 0;
} //Output: x is smaller