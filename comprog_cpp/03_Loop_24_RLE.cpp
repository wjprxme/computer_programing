#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    char x = s[0];
    unsigned int i = 0,c = 0;
    while (i<s.length()) {
        if (x==s[i]) {
            c++;
        }
        else {
            cout << x << " " << c << " ";
            x = s[i];
            c = 0;
            i--;
        }
        if (i==s.length()-1) {
            cout << x << " " << c;
        }
        i++;
    }
}