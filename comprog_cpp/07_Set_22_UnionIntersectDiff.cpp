#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    vector <set <int> > group;
    set <int> setsize;
    set <int> U;
    int n = 0;
    //U
    while (getline(cin, line)) {
        line = line + " ";
        set <int> s;
        int c = 0;
        for (int i = 0; i < line.length(); i++) {
            if (line[i] != ' ') {
                c++;
            }
            else {
                s.insert(stoi(line.substr(i - c,c)));
                U.insert(stoi(line.substr(i - c,c)));
                c = 0;
            }
        }
        group.push_back(s);
        setsize.insert(group[n].size());
        n++;
    }
    cout << "U: ";
    for (auto itr = U.begin(); itr != U.end(); itr++) {
        cout << *itr << ' '; 
    }
    cout << endl;
    //I
    set<int> I = group[0];
    for (int i = 1; i < group.size(); i++) {
        for (auto itr = I.begin(); itr != I.end();) {
            if (group[i].find(*itr) == group[i].end()) {
                itr = I.erase(itr);
            }
            else {
                itr++;
            }
        }
    }
    cout << "I: ";
    for (auto itr = I.begin(); itr != I.end(); itr++) {
        cout << *itr << ' ';
    }
    if (I.size() == 0) {
        cout << "empty set";
    }
    cout << endl;
    //D
    set <int> D = group[0];
    for (int i = 1; i < group.size(); i++) {
        for (auto itr = D.begin(); itr != D.end();) {
            if (group[i].find(*itr) != group[i].end()) {
                itr = D.erase(itr);
            } 
            else {
                itr++;
            }
        }
    }
    cout << "D: ";
    for (auto itr = D.begin(); itr != D.end(); itr++) {
        cout << *itr << ' '; 
    } 
    if (D.size() == 0) {
        cout << "empty set";
    }
}