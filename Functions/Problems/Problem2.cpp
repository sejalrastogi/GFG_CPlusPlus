#include <iostream>
using namespace std;
void fun()
{
    static int x = 1; //Static variable stays there even if the function call is over. Here, x=1 value is used only when it is called the first time i.e., it only initializes the value once. Another time, it will use the previous value and will update the previous value.
    x++;
    cout << x << " ";
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
} //2 3 4