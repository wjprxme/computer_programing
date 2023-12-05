#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#pragma GCC optimize("-O3")

using namespace std;
int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string c;
    vector<string> code;
    string g;
    vector<string> grade;
    while (cin >> c){
        if (c == "q") {
            break;
        }
        code.push_back(c);
        cin >> g;
        grade.push_back(g);
    }
    cin.ignore();
    vector<string> list;
    string l;
    getline(cin,l);
    l += ' ';
    int count = 0;
    for (int i = 0; i < l.length(); i++) {
        if (l[i] != ' ') {
            count++;
        }
        else {
            list.push_back(l.substr(i - count,count));
            count = 0;
            continue;
        }
    }
    for (int i = 0; i < code.size(); i++) {
        for (int j = 0; j < list.size(); j++) {
            if (code[i] == list[j]) {
                if (grade[i] == "A") {
                    grade[i] = "A";
                }
                if (grade[i] == "B+") {
                    grade[i] = "A";
                }
                if (grade[i] == "B") {
                    grade[i] = "B+";
                }
                if (grade[i] == "C+") {
                    grade[i] = "B";
                }
                if (grade[i] == "C") {
                    grade[i] = "C+";
                }
                if (grade[i] == "D+") {
                    grade[i] = "C";
                }
                if (grade[i] == "D") {
                    grade[i] = "D+";
                }
                if (grade[i] == "F") {
                    grade[i] = "D";
                }
            }
        }
    }
    for (int i = 0; i < code.size(); i++) {
        cout << code[i] << ' ' << grade[i] << endl;
    }
}