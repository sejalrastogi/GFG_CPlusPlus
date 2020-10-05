#include <iostream>
using namespace std;

int main(void)
{
    int x, y, sum=0;
    cout << "Enter two numbers: "; // << - (Insertion Operator)
    cin >> x >> y;                //>> - (Extraction Operator)
    sum=x+y;
    cout << "Sum of " << x << " and " << y << " is " << sum;
    return 0;
}
//Input and Output are buffered in C++ Program