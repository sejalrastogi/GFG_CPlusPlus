#include <iostream>
using namespace std;
int main()
{
    fun();
    return 0;
}
void fun()
{
    cout << "Hello";
} //error: 'fun' was not declared in this scope

//It will generate a compiler error.
/*To prevent from this compiler error, 
We can write the func. definition before the main function instead of writing it after the main function insted of writing it after the main function.
OR
By declaring the function at the top by writing only, void fun(); */