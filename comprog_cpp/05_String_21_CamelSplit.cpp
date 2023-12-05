#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.length(); i++) {
        if (s[i]>='A'&&s[i]<='Z') {
            cout << ", " << s[i];
        }
        else if (s[i]>='0'&&s[i]<='9') {
            cout << ", ";
            for (int j = i; j < s.length(); j++) {
                if (s[j]>='0'&&s[j]<='9') {
                    cout << s[j];
                }
                else {
                    i = j;
                    cout << ", " << s[i];
                    break;
                }
                if (j == s.length() - 1) {
                    break;
                }
            }
        }
        else if (s[i]>='a'&&s[i]<='z') {
            cout << s[i];
        }
    }
}