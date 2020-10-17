#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break;
        cout << i << " "; // 0 1 2 3 4
    }
}//Break Statement just terminates the loop.