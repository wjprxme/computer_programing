#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    getline(cin,x);
    unsigned int i = 0;
    while (i < x.length()) {
        if (x[i]=='(') {
            x[i]='[';
        }
        else if (x[i]=='[') {
            x[i]='(';
        }
        else if (x[i]==')') {
            x[i]=']';
        }
        else if (x[i]==']') {
            x[i]=')';
        }
        i++;
        }
    cout << x;
}