/*Program to take age and gender of a user and print one of the following as output:
Male Kid
Female Kid
Male Adult
Female Adult */

#include <iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender as 'F' or 'M': ";
    cin >> gender;
    if (gender == 'M')
    {
        cout << "Male ";
        if (age < 18)
            cout << "Kid";
        else
            cout << "Adult";
    }
    else if (gender == 'F')
    {
        cout << "Female ";
        if (age < 18)
            cout << "Kid";
        else
            cout << "Adult";
    }
    else
    {
        cout << "Invalid Gender";
    }
    return 0;
}
