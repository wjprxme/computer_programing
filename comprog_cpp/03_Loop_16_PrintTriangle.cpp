#include <iostream>
#include <string>
using namespace std;
int main() {
    int h;
    cin >> h;
    int a = 0;
    while (a<h-1) {
        cout << '.';
        a++;
    }
    cout << '*' << endl;
    int i = 0;
    while (i<h-2) {
        int b = 0;
        while (b<h-2-i) {
            cout << '.';
            b++;
        }
        cout << '*';
        int c = 0;
        while (c<((i+1)*2-1)) {
            cout << '.';
            c++;
        }
        cout << '*' << endl;
        i++;
    }
    int d = 0;
    while (d<(h*2-1)) {
        cout << '*';
        d++;
    }
}