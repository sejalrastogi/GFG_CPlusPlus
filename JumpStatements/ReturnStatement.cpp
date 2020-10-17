#include <iostream>
using namespace std;
int main()
{
    cout << "Begin ";
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            return 0;
        }
        cout << i << " ";
    }
    cout << "End";
}//Begin 0 1 2 3 4

//Return Statement takes you out of the function itself. It is stronger than Break Statement.