//Program to find the sum of first n natural numbers. The program should generate an error, if entered number is negative.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n<0)
    cout << "Invalid";
    else
    cout << n*(n+1)/2;
    return 0;
}