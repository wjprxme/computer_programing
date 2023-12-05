#include <iostream>
#include <set>
using namespace std;
int main() {
    string w, l;
    set <string> win;
    set <string> lose;
    while (cin >> w >> l) {
        win.insert(w);
        lose.insert(l);
    }
    bool status = 0;
    for (auto itr = win.begin(); itr != win.end(); itr++) {
        if (lose.find(*itr) == lose.end()) {
            cout << *itr << ' ';
            status = 1;
        }
    }
    if (status == 0) {
        cout  << "None";
    }
}