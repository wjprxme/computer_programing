#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    cin >> x;
    string x1 = x.substr(0,2);
    string x2 = x.substr(3,2);
    string x3 = x.substr(6,4);
    int a,b1, c;
    a = stoi(x1);
    string b = "JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC";
    b1 = (stoi(x2))*4-4;
    string b2 = b.substr(b1,3);
    c = stoi(x3);
    c = c - 543;
    cout << b2 << " " << a << ", " << c;
}