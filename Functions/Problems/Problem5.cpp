#include <iostream>
using namespace std;
void fun(int x, int y = 0, int z)
{
    return (x + y + z);
}
int main()
{
    cout << fun(10, 20, 30);
}
//Compiler error: default parameters can only be put in the last parameter