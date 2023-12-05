#include <iostream>
#include <map>
using namespace std;
int main () {
    int N;
    cin >> N;
    map <string, string> mapphone;
    string name, first, last, phone;
    for (int i = 0; i < N; i++) {
        cin >> first >> last >> phone;
        name = first + " " + last;
        mapphone[name] = phone;
        mapphone[phone] = name;
    }
    int M;
    cin >> M;
    cin.ignore();
    string q;
    while (getline(cin, q)) {
        cout << q << " --> ";
        if (mapphone.find(q) != mapphone.end()) {
            cout << mapphone[q] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
}
