#include <iostream>
using namespace std;
int main(){
    int x=5;
    bool res= (x==4) && (x++); //&& - (And operator)
    cout << res << " " << x;
    return 0;
}//0 5