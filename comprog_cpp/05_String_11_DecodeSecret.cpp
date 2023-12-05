#include <iostream>
#include <string>
using namespace std;
int main() {
    string x;
    while (getline(cin,x)) {
        string ans="";
        char special = x[x.length()-1];
        int c = 0;
        for (int i = 0; i < x.length()-1; i++) {
            if (x[i]==special) {
                c = 1;
                for (int j = i+1; x[j] != special; j++) {
                    c++;
                }
            ans += x.substr(i+1,c-1);
            i+=c;
            }
        }
        cout << ans << endl;
    }
}
