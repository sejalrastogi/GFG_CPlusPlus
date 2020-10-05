#include <iostream>
using namespace std;

int main(void)
{
    int x;
    cout << "Enter Side: "; //<< -(Insertion Operator)
    cin >> x;               //>> -(Extraction Operator)
    cout << "Area of Square " << (x * x);
    return 0;
}
//cin is used to read something from your standard input device or standard input stream
//cin is used for user input