#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    double z = static_cast<double>(x) / y; //It first checks that typecasting is needed or not and then type-cast only when its needed.
    cout << z;
    return 0;
} //Output: 0.5