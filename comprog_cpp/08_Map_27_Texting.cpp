#include <iostream>
#include <map>
#include <string>
using namespace std;
int main () {
    string code;
    string characters = "abcdefghijklmnopqrstuvwxyz ";
    string strings[] = {
        "2", "22", "222",
        "3", "33", "333",
        "4", "44", "444",
        "5", "55", "555",
        "6", "66", "666",
        "7", "77", "777", "7777",
        "8", "88", "888",
        "9", "99", "999", "9999",
        "0"
    };
    map <char, string> T2K;
    map <string, char> K2T;
    for (int i = 0; i < characters.length(); i++) {
        T2K[characters[i]] = strings[i];
        K2T[strings[i]] = characters[i];
    }
    while (getline(cin, code)) {
        if (code.substr(0,3) == "T2K") {
            cout << ">> ";
            for (int i = 4; i < code.length(); i++) {
                if (code[i] >= 'A' && code[i] <= 'Z') {
                    code[i] = code[i] - 'A' + 'a';
                }
                cout << T2K[code[i]] << ' ';
            }
            cout << endl;
        }
        else if (code.substr(0,3) == "K2T") {
            cout << ">> ";
            for (int i = 4; i < code.length(); i++) {
                string sequence;
                while (i < code.length() && code[i] != ' ') {
                    sequence += code[i];
                    i++;
                }
                cout << K2T[sequence] ;
            }
            cout << endl;
        }
    }
}