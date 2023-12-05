#include <iostream>
#include <string>
using namespace std;
int main() {
    string p;
    string w,s;
    getline(cin,w);
    getline(cin,s);
    int c=0;
    while (true) {
        int i = s.find(w);
        if (i == -1) {
            break;
        }
        char after = s[i + w.length()];
        char before = s[i - 1];
        if (after == '"' || after == '(' || after == ')' || after == ',' || after == '.' || after == 39 || after == '/' || after == ' ' || (i + w.length()) == s.length()){
            if (before == '"' || before == '(' || before == ')' || before == ',' || before == '.' || before == 39 || before == '/' || before == ' ' || i == 0) {
                c++;
            }
        }
        s[i] = w[0] + 1;
    }
    cout << c;
}