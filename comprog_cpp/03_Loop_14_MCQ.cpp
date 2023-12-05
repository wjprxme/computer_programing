#include <iostream>
using namespace std;
int main() {
    string k,a;
    getline(cin,k);
    getline(cin,a);
    int i = 0,x = 0;
    if (k.length() == a.length()) {
        while (i < k.length()) {
            if (k[i] == a[i]) {
                x++;
            }
            i++;
        }
        cout << x;
    }
    else cout << "Incomplete answer";
}