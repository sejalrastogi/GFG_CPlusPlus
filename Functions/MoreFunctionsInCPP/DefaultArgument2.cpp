#include <iostream>
using namespace std;
void printDetails(string f_name, string l_name = "")
{
    cout << f_name << " ";
    if (l_name != "")
        cout << l_name;
}
int main()
{
    printDetails("Sandeep", "Jain\n");//Sandeep Jain
    printDetails("Shivam");//Shivam
    return 0;
}