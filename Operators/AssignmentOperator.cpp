#include <iostream>
using namespace std;

int main()
{
    int x=0, y;
    y=x;
    y=x=20; //(y=(x=20))
    cout << x << " " << y << endl;//20 20
    x +=10;
    cout << x << endl;//30
    x += 10+2;
    cout << x << endl;//42
    return 0;
}