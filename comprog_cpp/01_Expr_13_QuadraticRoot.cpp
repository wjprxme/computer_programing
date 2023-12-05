#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, x, y;
    cin >> a;
    cin >> b;
    cin >> c;
    x = (((-b)-(sqrt(pow(b,2)-(4*a*c)))))/(2*a); 
    y = (((-b)+(sqrt(pow(b,2)-(4*a*c)))))/(2*a); 
    cout << round(x*1e3)/1e3 <<endl;
    cout << round(y*1e3)/1e3 <<endl;
}