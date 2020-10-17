#include <iostream>
using namespace std;
void findGreater(int x, int y)
{
    if (x > y)
    {
        cout << x << " is greater" << endl;
        return;
    }
    cout << y << " is greater" << endl;
}
int main()
{
    findGreater(10, 20);//20 is greater
    findGreater(20, 10);//20 is greater
    return 0;
}