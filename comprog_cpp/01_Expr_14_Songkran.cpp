#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x, y, z;
    cin >> x;
    y = (x-543)%100;
    z = floor(y/4);
    cout << (y+z+11)%7;
}
