#include <iostream>
#include <set>
#include <string>
using namespace std;
int main() {
    string x, y;
    getline(cin, x);
    getline(cin, y);
    multiset <char> setx;
    multiset <char> sety;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] >= 'A' && x[i] <= 'Z') {
            x[i] = x[i] - 'A' + 'a';
        }
        if (x[i] != ' ') {
            setx.insert(x[i]);
        }
    }
    for (int i = 0; i < y.length(); i++) {
        if (y[i] >= 'A' && y[i] <= 'Z') {
            y[i] = y[i] - 'A' + 'a';
        }
        if (y[i] != ' ') {
            sety.insert(y[i]);
        }
    }
    if (setx == sety) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}