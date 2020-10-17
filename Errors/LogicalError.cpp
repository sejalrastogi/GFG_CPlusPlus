#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20;
    if (x = y) //Code Fix: if(x==y)--> Otherwise x will be assigned the value of y which is a non-zero digit value that will always evaluate the condition as true.
    {
        cout << "Same!";
    }
    else
    {
        cout << "Not Same!";
    }

    return 0;
}