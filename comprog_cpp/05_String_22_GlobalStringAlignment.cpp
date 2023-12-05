#include <iostream>
#include <string>
using namespace std;
int main(){
    string x, y;
    int max1 = 0, max2 = 0, r, r1, r2, c1, c2;
    cin >> x >> y;
    for (int i = 0; i < y.length(); i++) {
        c1 = 0;
        for (int j = 0; j < x.length(); j++) {
            if (i + j > y.length()) {
                break;
            }
            if (x[j] == y[j + i]) {
                c1++;
            }
        }
        r = i;
        if (c1 > max1) {
            r1 = r;
        }
        max1 = max(max1, c1);
    }
    for (int i = 0; i < x.length(); i++) {
        c2 = 0;
        for (int j = 0; j < y.length(); j++) {
            if (i + j > x.length()) {
                break;
            }
            if (y[j] == x[j + i]) {
                c2++;
            }
        }
        r = i;
        if(c2 > max2) {
            r2 = r;
        }
        max2 = max(max2, c2);
    }
    if (max1 > max2) {
        string xinsert;
        for (int i = 0; i < r1; i++){
            xinsert += "-";
        }
        cout << xinsert << x << endl << y << endl << max1;
    }
    else if (max1 < max2) {
        string yinsert;
        for (int i = 0; i < r2; i++){
            yinsert += "-";
        }
        cout << x << endl << yinsert << y << endl << max2;
    }
    else if (max1 == 0 && max2 == 0) {
        cout << x << endl << y << endl << max1;
    }
    else if (max1 == max2) {
        if (r1 <= r2) {
            string xinsert;
            for (int i = 0; i < r1; i++){
                xinsert += "-";
            }
            cout << xinsert << x << endl << y << endl << max1;
        }
        else {
            string yinsert;
            for (int i = 0; i < r2; i++)    {
                yinsert += "-";
            }
            cout << x << endl << yinsert << y << endl << max2;
        }
    }
} 