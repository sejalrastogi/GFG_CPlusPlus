#include <iostream>
using namespace std;
void fun1()
{
    cout << "Inside fun1 ";
}
void fun2()
{
    cout << "fun2 begins ";
    fun1();
    cout << "fun2 ends ";
}
int main()
{
    cout << "Main Begins ";
    fun2();
    cout << "Main Ends";
    return 0;
}//Main Begins fun2 begins Inside fun1 fun2 ends Main Ends