#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string x;
    int sum = 0;
    int R = 1, Y = 2, G = 3, N = 4, B = 5, P = 6, K =7;
    bool status = false;
    while (getline(cin,x)) {
        if (x[0]!='R') {
            status = false;
        }
        else {
            if (x.length()==1&&x[0]==R) {
                status = true;
                sum +=R;
            }
            else if (x[2]=='R') {
                status = false;
            }
            else {
                status = true;
                sum += R + x[2];
            }
        }
        for (int i = 2; i < x.length()/2+1; i+=2) {
            for (int j = 0; i < x.length()/2; i+=2) {
                if (x[i]=='R'&&x[i+j]=='R') {
                    status = false;
                }
                if (x[i]=='R'&&x[i+j]!='R') {
                    status = true;
                    sum += x[i+j];
                }
            }
        }
        if (status==true) {
            cout << sum;
        }
        else {
            cout << "WRONG_INPUT";
        }
    }
}