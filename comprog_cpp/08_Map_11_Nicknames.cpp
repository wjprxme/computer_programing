#include <iostream>
#include <map>
using namespace std;
int main () {
    int N;
    cin >> N;
    map <string, string> mapname;
    string name, nickname;
    for (int i = 0; i < N; i++) {
        cin >> name >> nickname;
        mapname[name] = nickname;
        mapname[nickname] = name;
    }
    int M;
    cin >> M;
    string q;
    while (cin >> q) {
        if (mapname.find(q) != mapname.end()) {
            cout << mapname[q] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
}
