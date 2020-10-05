#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c = 30;
    if (c > b > a) //(c>b)>a - Since (c>b) is true, it will give the value 1. Then, we have to check if 1>a or not. Since a=10, therefore (1>10) evaluates to false.
        cout << "Y";
    else
        cout << "N";

    return 0;
} //N