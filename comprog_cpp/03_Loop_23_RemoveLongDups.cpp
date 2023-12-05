#include <iostream>
#include <string>
using namespace std;
int main() {
    string t;
    cin >> t;
    int k;
    cin >> k;
    char t1 = t[0];
    int i = 0,c = 0,d = 0;
    while (i<=t.length()) {
        if (t1 == t[i]) {
            c++;
        }
        else {
            if (c<k) {
                while (d<c) {
                    if (i==0) {
                        cout << t[0];
                    }
                    else {
                        cout << t[i-1];
                        d++;
                    }
                }
            }
        t1 = t[i];
        c = 1;
        d = 0;
        }
        i++;
    }
}