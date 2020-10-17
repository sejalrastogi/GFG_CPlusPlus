//Using same function names for different purposes is called function overloading.
#include <iostream>
using namespace std;
void print(int i)
{
    cout << i << " ";
}
void print(string s)
{
    cout << s << " ";
}
int main()
{
    print(10);
    print("GFG");
}//Output: 10 GFG