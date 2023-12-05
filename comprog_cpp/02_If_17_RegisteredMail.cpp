#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n<=100) cout << "18";
    if (n>100&&n<=250) cout << "22";
    if (n>250&&n<=500) cout << "28";
    if (n>500&&n<=1000) cout << "38";
    if (n>1000&&n<=2000) cout << "58";
    if (n>2000) cout << "Reject";
} 