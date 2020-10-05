#include <iostream>
using namespace std;
int main(){
    int x=1, y=2, z=3, a;
    a= x,y,z;   //Since comma operator has the least priority, therefore, assignment operator will be executed, i.e., a=x=1
    cout << a; //1
    return 0;
}