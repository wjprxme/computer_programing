#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    int i = 0;
    while (i < n) {
        string x;
        getline(cin,x);
        int sum = 0;
        string color = " R Y G N B P K";
        bool status = false;
        if (x[0]!='R') {
            cout << "WRONG_INPUT" << endl;
        }
        if (x[0]=='R'&&x.length()==1) {
            status = true;
            sum += 1;
        }
        int c = 0;
        for (int j = 0; j < x.length(); j++) {
            if (x[j]=='R') {
                c++;
            }
        }
        if (x[0]=='R'&&x.length()>1) {
            for (int j = 0; j < x.length(); j++) {
                if (x[j]=='R'&&j%4==0) {
                    for (int k = 0; k < color.length(); k++) {
                        if (x[j+2]!='R'&&x[j+2]==color[k]) {
                            status = true;
                            sum += 1 + k/2+1;
                        }
                    }
                }
            }
        }
            if (status==true) {
                cout << sum << endl;
            }
            else {
                cout << "WRONG_INPUT" << endl;
            }
        
    }
}