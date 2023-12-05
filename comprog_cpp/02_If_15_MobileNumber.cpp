#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    cin >> x;
    if (x.size()==10){
        x = x.substr(0,2);
        if (x=="06" || x=="08" || x=="09")
            cout << "Mobile number";
        else cout << "Not a mobile number";
    }
    else cout << "Not a mobile number";
    return 0;
}