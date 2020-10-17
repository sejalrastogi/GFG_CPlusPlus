#include <iostream>
using namespace std;

int main()
{
    int x, y;
    x = 10;
    y = 20         //error: expected ';' before 'z'
    z = x + y; //error: 'z' was not declared in this scope
    cout << z;
    return 0;
}